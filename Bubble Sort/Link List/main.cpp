#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};

Node *head = NULL;

void printList()
{
    for (Node *p=head; p; p=p->next) {
	cout << p->data << ' ';
    }
    cout << '\n';
}


void sortList()
{
    Node *cur, *next, *prev;
    bool swapped;

    // Keep Passing through the list until swap nothing.
    do {
	swapped = false;
	prev = NULL;
	for (cur = head; cur && cur->next; prev = cur, cur = cur->next) {
	    next = cur->next;
	    if (cur->data > next->data) {
		if (prev) prev->next = next;
		else head = next;
		cur->next = next->next;
		next->next = cur;
		swapped = true;
	    }
	}
    } while (swapped);
}


int
main()
{
    int i;
    while (cin >> i) {
	Node *p = new Node;
	p->data = i;
	p->next = head;
	head = p;
    }
    printList();
    sortList();
    printList();
    return 0;
}