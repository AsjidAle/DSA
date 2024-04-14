
#include <bits/stdc++.h>
using namespace std;

// re-arrange the elements to get the actual pivot index
int partition(int arr[], int low, int high, int pivot)
{
    int PIndex = low;

    // Traverse the array
    for (int i = low; i <= high; i++)
    {

        // If the current element is smaller than the pivot element swap PIndex element with current element.
        if (arr[i] <= pivot)
        {
            swap(arr[PIndex], arr[i]);
            // Increment the pointer.
            PIndex++;
        }
    }

    PIndex--;

    return PIndex;
}

// Divide the array into two subarrays around the pivot and recursively.
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];

        // Rearrange and get the actual pivot index
        int PIndex = partition(arr, low, high, pivot);

        // solve for the left and right arrays
        quickSort(arr, low, PIndex - 1);
        quickSort(arr, PIndex + 1, high);
    }
}

int main()
{

    int arr[7] = {6, 3, 9, 5, 2, 8, 7};
    int n = 7;

    cout << "The array before quick sort is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    quickSort(arr, 0, n - 1);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
