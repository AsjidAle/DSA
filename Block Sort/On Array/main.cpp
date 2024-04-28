#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> blockSort(const vector<int>& arr, int blockSize) {
    vector<vector<int>> blocks;

    // Divide the input array into blocks of size blockSize
    for (int i = 0; i < arr.size(); i += blockSize) {
        vector<int> block;
        for (int j = i; j < min(i + blockSize, static_cast<int>(arr.size())); j++) {
            block.push_back(arr[j]);
        }
        // Sort each block and append it to the list of sorted blocks
        sort(block.begin(), block.end());
        blocks.push_back(block);
    }

    // Merge the sorted blocks into a single sorted list
    vector<int> result;
    while (!blocks.empty()) {
        // Find the smallest element in the first block of each sorted block
        int minIdx = 0;
        for (int i = 1; i < blocks.size(); i++) {
            if (blocks[i][0] < blocks[minIdx][0]) {
                minIdx = i;
            }
        }
        // Remove the smallest element and append it to the result list
        result.push_back(blocks[minIdx][0]);
        blocks[minIdx].erase(blocks[minIdx].begin());
        // If the block is now empty, remove it from the list of sorted blocks
        if (blocks[minIdx].empty()) {
            blocks.erase(blocks.begin() + minIdx);
        }
    }
    return result;
}

int main() {
    // Original array
    vector<int> arr = {1, 7, 8, 2, 3, 5, 4, 6};
    cout << "Input: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Specify block size
    int blockSize = 3;

    // Call the function
    vector<int> sortedArr = blockSort(arr, blockSize);

    // Output the sorted array
    cout << "Output: ";
    for (int i = 0; i < sortedArr.size(); i++) {
        cout << sortedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
