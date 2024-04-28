#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
struct number
{
    int random_number;
    number* p_next_number;
};
number* p_list_numbers = NULL;
number* get_new_number(int i)
{
    number* p_number = new number;
    p_number->random_number = i;
    p_number->p_next_number = p_list_numbers;
    p_list_numbers = p_number;
    return p_number;
}

void show_numbers(int i)
{
    int count_numbers = 0;
    while (p_list_numbers != NULL)
    {
       cout<< p_list_numbers->random_number;
       if (count_numbers < (i-1))
       {
           cout<< ", ";
       } else
       cout << ".";
       p_list_numbers = p_list_numbers->p_next_number;
       count_numbers++;
    }
}

void order_numbers(int i)
{
    int smaller_number = p_list_numbers->random_number;
    number* p_smaller_number = p_list_numbers->p_next_number;
    for(int j = 0; j < i; j++)
    {
        p_list_numbers = p_list_numbers->p_next_number;
        if (smaller_number > p_list_numbers->random_number)
        {
            smaller_number = p_list_numbers->random_number;
            p_smaller_number = p_list_numbers->p_next_number;
        }
    }
    /* in theory now smaller_number is the smallest number on 
       the list and p_smaller_number is a pointer pointing to where 
       the smallest number is, but what do I have to do now? */
}

int main()
{
    long int times;
    cout<<"How many numbers do you wish me to order? ";
    cin>>times;

    srand(time(NULL));

    for (int i = 0; i < times; i++)
    {
        int random = rand() % 100;
        get_new_number (random);
    }
    cout<< "These are the original numbers: ";
    show_numbers(times);

    order_numbers(times);

    cout<< "\nThese are the ordered numbers: ";
    show_numbers(times);
}