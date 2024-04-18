#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& aVector) {
    for (size_t index = 1; index < aVector.size(); index++) {
        int currentValue = aVector[index];
        int position = index;

        while (position > 0 && aVector[position - 1] > currentValue) {
            aVector[position] = aVector[position - 1];
            position--;
        }

        aVector[position] = currentValue;
    }
}

int main() {
    static const int arr[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    vector<int> aVector(arr, arr + sizeof(arr) / sizeof(arr[0]));

    insertionSort(aVector);

    for (const int& val : aVector) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
