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

    void comboSort() {
        if (!head) return;

        double shrinkFactor = 1.3;
        int gap = getLength();
        bool sorted = false;

        while (gap > 1 || !sorted) {
            if (gap > 1) {
                gap = static_cast<int>(gap / shrinkFactor);
            }

            Node* current = head;
            Node* next = head;

            for (int i = 0; i < gap; ++i) {
                if (next->next) {
                    next = next->next;
                }
            }

            sorted = true;

            while (next) {
                if (current->data > next->data) {
                    std::swap(current->data, next->data);
                    sorted = false;
                }
                current = current->next;
                next = next->next;
            }
        }
    }

private:
    int getLength() {
        int length = 0;
        Node* temp = head;
        while (temp) {
            ++length;
            temp = temp->next;
        }
        return length;
    }
};

int main() {
    LinkedList list;
    list.append(10);
    list.append(30);
    list.append(20);
    list.append(50);
    list.append(40);

    std::cout << "Original list: ";
    list.printList();

    list.comboSort();

    std::cout << "Sorted list: ";
    list.printList();

    return 0;
}
