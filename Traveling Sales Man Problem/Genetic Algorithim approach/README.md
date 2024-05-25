# Traveling Salesman Problem (TSP) Implementation using Genetic Algorithm

This code demonstrates the implementation of the Traveling Salesman Problem (TSP) using a Genetic Algorithm in C++. The TSP is a well-known combinatorial optimization problem that aims to find the shortest possible route that visits a set of cities exactly once and returns to the starting city. Here's a breakdown of the code:

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity and Space](#time-complexity-and-space)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features

- Solves the Traveling Salesman Problem using a Genetic Algorithm.
- Finds the minimum cost to visit all cities and return to the starting city.
- Displays the evolution of the best fitness over generations.
- Reconstructs and displays the optimal route.

## Requirements

- C++ compiler such as GCC or Clang

## Getting Started

1. Clone this repository to your local machine:
    ```shell
    git clone https://github.com/your-repo/tsp-genetic-algorithm.git
    ```

2. Change to the project directory:
    ```shell
    cd tsp-genetic-algorithm
    ```

3. Compile the source code using a C++ compiler:
    ```shell
    g++ -o tsp main.cpp
    ```

4. Run the compiled program:
    ```shell
    ./tsp
    ```

## Time Complexity and Space

**Time Complexity**: The time complexity of this genetic algorithm approach is dependent on the number of generations (`NUM_GENERATIONS`), the population size (`POPULATION_SIZE`), and the number of cities (`numCities`). It is generally `O(NUM_GENERATIONS * POPULATION_SIZE * numCities^2)`.

**Space Complexity**: The space complexity is `O(POPULATION_SIZE * numCities)`, as we are storing the population of individuals and their chromosomes.

## Usage

- The program initializes a distance matrix representing the distances between each pair of cities.
- It evolves the population over a number of generations to minimize the route cost.
- It displays the best fitness for each generation.
- It reconstructs and displays the best route found.

## Functions

The implementation contains the following key functions:

- `calculateFitness`: Calculates the total distance of a given route.
- `createIndividual`: Creates a new individual with a random route and calculates its fitness.
- `mutate`: Mutates an individual's chromosome to introduce variability.
- `crossover`: Combines two parents' chromosomes to produce an offspring.
- `tournamentSelection`: Selects the best individual from a random subset of the population.
- `geneticAlgorithm`: Runs the genetic algorithm to solve the TSP.
- `main`: Calls the genetic algorithm function to solve the TSP and print the results.

## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
