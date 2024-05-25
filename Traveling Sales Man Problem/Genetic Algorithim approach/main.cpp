#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>
#include <cmath>

using namespace std;

const int POPULATION_SIZE = 100;
const int NUM_GENERATIONS = 1000;
const double MUTATION_RATE = 0.01;

vector<vector<int>> distanceMatrix = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

int numCities = distanceMatrix.size();

random_device rd;
mt19937 gen(rd());

struct Individual {
    vector<int> chromosome;
    int fitness;
};

int calculateFitness(const vector<int>& chromosome) {
    int totalDistance = 0;
    for (int i = 0; i < numCities - 1; ++i) {
        totalDistance += distanceMatrix[chromosome[i]][chromosome[i + 1]];
    }
    totalDistance += distanceMatrix[chromosome[numCities - 1]][chromosome[0]];
    return totalDistance;
}

Individual createIndividual() {
    Individual indiv;
    indiv.chromosome.resize(numCities);
    iota(indiv.chromosome.begin(), indiv.chromosome.end(), 0);
    shuffle(indiv.chromosome.begin() + 1, indiv.chromosome.end(), gen); // Keep the starting city fixed
    indiv.fitness = calculateFitness(indiv.chromosome);
    return indiv;
}

void mutate(Individual& indiv) {
    for (int i = 1; i < numCities; ++i) {
        if (uniform_real_distribution<>(0, 1)(gen) < MUTATION_RATE) {
            int j = uniform_int_distribution<>(1, numCities - 1)(gen);
            swap(indiv.chromosome[i], indiv.chromosome[j]);
        }
    }
    indiv.fitness = calculateFitness(indiv.chromosome);
}

Individual crossover(const Individual& parent1, const Individual& parent2) {
    Individual offspring;
    offspring.chromosome.resize(numCities, -1);
    
    int start = uniform_int_distribution<>(1, numCities - 2)(gen);
    int end = uniform_int_distribution<>(start + 1, numCities - 1)(gen);

    for (int i = start; i <= end; ++i) {
        offspring.chromosome[i] = parent1.chromosome[i];
    }

    int currentPos = 1;
    for (int gene : parent2.chromosome) {
        if (find(offspring.chromosome.begin(), offspring.chromosome.end(), gene) == offspring.chromosome.end()) {
            while (offspring.chromosome[currentPos] != -1) {
                ++currentPos;
            }
            offspring.chromosome[currentPos] = gene;
        }
    }

    offspring.fitness = calculateFitness(offspring.chromosome);
    return offspring;
}

Individual tournamentSelection(const vector<Individual>& population) {
    int tournamentSize = 5;
    vector<Individual> tournament;
    for (int i = 0; i < tournamentSize; ++i) {
        int randomIndex = uniform_int_distribution<>(0, POPULATION_SIZE - 1)(gen);
        tournament.push_back(population[randomIndex]);
    }
    return *min_element(tournament.begin(), tournament.end(), [](const Individual& a, const Individual& b) {
        return a.fitness < b.fitness;
    });
}

void geneticAlgorithm() {
    vector<Individual> population;
    for (int i = 0; i < POPULATION_SIZE; ++i) {
        population.push_back(createIndividual());
    }

    for (int generation = 0; generation < NUM_GENERATIONS; ++generation) {
        vector<Individual> newPopulation;
        for (int i = 0; i < POPULATION_SIZE; ++i) {
            Individual parent1 = tournamentSelection(population);
            Individual parent2 = tournamentSelection(population);
            Individual offspring = crossover(parent1, parent2);
            mutate(offspring);
            newPopulation.push_back(offspring);
        }
        population = newPopulation;

        auto bestIndividual = *min_element(population.begin(), population.end(), [](const Individual& a, const Individual& b) {
            return a.fitness < b.fitness;
        });
        cout << "Generation " << generation << " Best Fitness: " << bestIndividual.fitness << endl;
    }

    auto bestIndividual = *min_element(population.begin(), population.end(), [](const Individual& a, const Individual& b) {
        return a.fitness < b.fitness;
    });
    cout << "Best Route: ";
    for (int gene : bestIndividual.chromosome) {
        cout << gene << " ";
    }
    cout << "0" << endl; // Return to the starting city
    cout << "Best Fitness: " << bestIndividual.fitness << endl;
}

int main() {
    geneticAlgorithm();
    return 0;
}
