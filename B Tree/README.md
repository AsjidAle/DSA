# B-Tree Implementation in C++

This project implements a B-Tree data structure in C++. A B-Tree is a self-balancing search tree commonly used in databases and file systems to provide efficient insertion, deletion, and search operations.

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Time Complexity](#time-complexity)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features

- Implementation of a B-Tree data structure in C++
- Supports efficient insertion and search operations
- Automatically balances the tree during insertions to ensure optimal performance
- Provides a `traverse` function to display the contents of the tree
- Customizable tree order (degree) provided during initialization

## Requirements

- A C++ compiler such as GCC or Clang

## Getting Started

1. Clone this repository to your local machine:
    

2. Change to the project directory:
    ```shell
    cd b-tree-cpp
    ```
3. Compile the source code using a C++ compiler:
    ```shell
    g++ -o btree main.cpp
    ```
4. Run the program:
    ```shell
    ./btree
    ```
## Time Complexity

<h3>Search: O(logᵦn)</h3>

<p>The time complexity for searching a key in the B-tree is logarithmic in the number of keys (n) in the tree. This is because the tree is balanced and each level contains multiple keys.</p>

<h3>Insertion: O(logᵦn)</h3>

<p>The time complexity for inserting a key in the B-tree is also logarithmic in the number of keys. Insertion may require node splits to maintain balance.</p>

<h3>Deletion: O(logᵦn)</h3>

<p>The time complexity for deleting a key in the B-tree is logarithmic in the number of keys. Deletion may involve merging nodes or redistributing keys to maintain balance.</p>
<h2>B-tree Space Complexity</h2>

<h3>Space: O(n)</h3>
<p>The space complexity of a B-tree is proportional to the number of keys stored in the tree. This includes the space taken by keys and child pointers.</p>




## Usage

- The program initializes a B-Tree with a specified degree and inserts sample values.
- It then traverses and prints the contents of the B-Tree.
- The program performs search operations for specified keys and prints whether the key is found or not.
- Modify the code in `main` to test different insertion operations and search for different keys as desired.

## Functions

The B-Tree implementation contains the following key classes and functions:

- `TreeNode`: Represents a node in the B-Tree. Contains the following methods:
  - `insertNonFull(int k)`: Inserts a key into the node when it is not full.
  - `splitChild(int i, TreeNode *y)`: Splits a child node to make space for a new key.
  - `traverse()`: Prints the keys in the tree in ascending order.
  - `search(int k)`: Searches for a key in the tree and returns the node containing the key, or `NULL` if not found.

- `BTree`: Represents the B-Tree and contains the following methods:
  - `insert(int k)`: Inserts a key into the B-Tree.
  - `traverse()`: Prints the keys in the tree in ascending order.
  - `search(int k)`: Searches for a key in the B-Tree and returns the node containing the key, or `NULL` if not found.

## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
