#include <iostream>  
#include<cmath>  
using namespace std;  

// Function to calculate the updated gap value
int updatedGap(int gap)  
{  
    // Reduce the gap by a factor of 1.3 and round down to the nearest integer
    gap = floor(gap/1.3);  

    // Ensure the gap is at least 1
    if (gap < 1)  
        return 1;  
    return gap;  
}  

// Function to perform comb sort on an array
void combSort(int a[], int n)  
{  
    int gap = n; // Initialize gap as the length of the array
    int swapped = 1; // Variable to track if any swaps have been made
  
    // Continue looping until gap becomes 1 and no swaps have been made
    while (gap != 1 || swapped == 1)  
    {  
        // Update the gap using the updatedGap function
        gap = updatedGap(gap); 
        swapped = 0; // Reset swapped flag
  
        // Loop through the array
        for (int i = 0; i < n-gap; i++)
        {  
            // Compare elements at index i and i+gap, and swap if necessary
            if (a[i] > a[i+gap]) 
            {  
                int temp = a[i];    
                a[i] = a[i+gap];    
                a[i+gap] = temp;    
                swapped = 1; // Set swapped flag to indicate a swap occurred
            }  
        }  
    }  
}  

// Function to print the elements of an array
void printArr(int a[], int n) 
{  
    for (int i=0; i<n; i++)  
        cout<<a[i]<<" ";  
}  




int main()  
{  
    int a[] = {48, 10, 23, 43, 28, 26, 1}; // Array to be sorted  
    int n = sizeof(a)/sizeof(a[0]); // Calculate the number of elements in the array
    cout<<"Before sorting array elements are - \n";  
    printArr(a, n); // Print the original array
    combSort(a, n); // Call combSort function to sort the array
    cout<<"\nAfter sorting array elements are - \n";    
    printArr(a, n); // Print the sorted array
    return 0;  
}  
