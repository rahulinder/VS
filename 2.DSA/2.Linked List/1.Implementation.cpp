#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void traversal(node* ptr) {
    while (ptr != NULL) {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main() {
    node* head;
    node* second;
    node* third;
    node* end;

    // Memory allocation using the 'new' operator
    head = new node();
    second = new node();
    third = new node();
    end = new node();

    // Link head node to second node
    head->data = 7;
    head->next = second;

    // 2nd to 3rd
    second->data = 11;
    second->next = third;

    // 3rd to 4th
    third->data = 41;
    third->next = end;

    // 4th to nullptr
    end->data = 66;
    end->next = NULL;

    traversal(head);

    return 0;
}