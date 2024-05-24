#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void append(int data) {
        if (!head) {
            head = new Node(data);
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = new Node(data);
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void gnomeSort() {
        if (!head) return;
        
        Node* current = head;
        while (current->next) {
            if (current->data <= current->next->data) {
                current = current->next;
            } else {
                std::swap(current->data, current->next->data);
                if (current != head) {
                    current = head;
                }
            }
        }
    }
};

int main() {
    LinkedList list;
    list.append(34);
    list.append(2);
    list.append(78);
    list.append(12);
    list.append(45);

    std::cout << "Original list: ";
    list.printList();

    list.gnomeSort();

    std::cout << "Sorted list: ";
    list.printList();

    return 0;
}
