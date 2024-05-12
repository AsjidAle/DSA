#include <iostream>
using namespace std;

// Node structure for a linked list
struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insert(Node*& head, int data) {
    if (head == nullptr) {
        head = createNode(data);
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = createNode(data);
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to implement shell sort on a linked list
void shellSort(Node*& head) {
    // Count the number of nodes in the linked list
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    // Perform shell sort
    for (int gap = count / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < count; i++) {
            Node* current = head;
            for (int j = 0; j < i; j++) {
                current = current->next;
            }

            int tempData = current->data;
            Node* prev = nullptr;
            Node* nextNode = nullptr;
            Node* prevNext = nullptr;
            Node* prevCurrent = nullptr;
            Node* currentNode = head;
            for (int j = i - gap; j >= 0; j -= gap) {
                while (currentNode != current && j > 0) {
                    prevCurrent = currentNode;
                    currentNode = currentNode->next;
                    j -= gap;
                }
                nextNode = currentNode->next;
                prevNext = prevCurrent->next;
                if (prevCurrent != nullptr) {
                    prevCurrent->next = current;
                }
                current->next = prevNext;
                if (prev != nullptr) {
                    prev->next = nextNode;
                } else {
                    head = current;
                }
                prev = current;
                current = nextNode;
                currentNode = nextNode;
            }
            if (prevCurrent != nullptr) {
                prevCurrent->next = current;
            }
        }
    }
}

int main() {
    Node* head = nullptr;

    // Insert elements into the linked list
    insert(head, 32);
    insert(head, 30);
    insert(head, 39);
    insert(head, 7);
    insert(head, 11);
    insert(head, 16);
    insert(head, 24);
    insert(head, 41);

    cout << "Before sorting, linked list elements are:\n";
    printList(head);

    // Sort the linked list using shell sort
    shellSort(head);

    cout << "After applying shell sort, linked list elements are:\n";
    printList(head);

    return 0;
}
