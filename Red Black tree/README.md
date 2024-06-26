# Red-Black Tree in C++

This project implements a Red-Black Tree data structure in C++. A Red-Black Tree is a self-balancing binary search tree that ensures efficient insertion, deletion, and search operations while maintaining balance and the properties of the tree.

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Time Complexity](#time-complexity)
- [Space Complexity](#space-complexity)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Functions](#functions)
- [Author](#author)

## Features

- Implementation of Red-Black Tree data structure in C++
- Supports insertion and deletion of nodes while maintaining tree balance
- Provides various tree traversal methods: Preorder, Inorder, and Postorder
- Offers utility functions such as searching for keys, finding minimum and maximum nodes, and finding the successor and predecessor of nodes

## Requirements

- A C++ compiler such as GCC or Clang

## Getting Started

1. Clone this repository to your local machine:


2. Change to the project directory:
    ```shell
    cd red-black-tree
    ```
3. Compile the source code using a C++ compiler:
    ```shell
    g++ -o rbt main.cpp
    ```
4. Run the program:
    ```shell
    ./rbt

    ```

## Time Complexity
<h3>Search: O(log n)</h3>

<p>The time complexity for searching in a Red-Black Tree is logarithmic in the number of nodes (n) in the tree. This is because the tree is balanced, meaning the height of the tree is approximately O(log n).</p>

<h3>Insertion: O(log n)</h3>

<p>The time complexity for inserting a new key into a Red-Black Tree is also logarithmic in the number of nodes. The insertion may involve rebalancing the tree, which is performed in O(log n) time.</p>

<h3>Deletion: O(log n)</h3>

<p>The time complexity for deleting a key from a Red-Black Tree is logarithmic in the number of nodes. Deletion may involve rebalancing the tree to maintain the Red-Black properties, which is performed in O(log n) time.</p>

## Space Complexity
<h3>Space: O(n)</h3>
<p>The space complexity of a Red-Black Tree is proportional to the number of nodes in the tree (n). This includes the space taken by the nodes themselves (including keys, pointers, and color information).</p>


## Usage

The main components of the project are:

- `Node`: Represents each node in the Red-Black Tree, with fields for data, color, and pointers to left, right, and parent nodes.
- `RedBlackTree`: The main class representing the Red-Black Tree. It contains functions for insertion, rotations, and inorder traversal.

The `main` function demonstrates how to create a Red-Black Tree, insert nodes, and perform an inorder traversal.

Once the program is running, it will insert sample values into the Red-Black Tree and print the tree structure.

- You can modify the `main` function to test different insertion and deletion operations.
- Modify the code to insert different keys and delete keys as desired.

## Functions

The Red-Black Tree class contains the following key functions:

- `insert(int key)`: Inserts a node with the given key into the tree and balances it.
- `deleteNode(int key)`: Deletes a node with the given key from the tree and balances it.
- `searchTree(int key)`: Searches for a node with the given key in the tree.
- `preorder()`, `inorder()`, `postorder()`: Perform Preorder, Inorder, and Postorder traversal of the tree, respectively.
- `printTree()`: Prints the tree structure with node colors.



## Contributing

Contributions are welcome! To contribute to the project:

1. Fork the repository.
2. Create a new branch.
3. Make your changes and test them.
4. Submit a pull request.

Please ensure your code follows the project's coding style and includes tests for new features or bug fixes.


## Author

- Asjid Ali (asjidale@gmail.com)

Feel free to reach out to me with any questions or issues.
