/*
Insertion :
-at the beginning of list 
-at the end of list
-in between two nodes
-after a node
*/
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void traversal(node* ptr) {
    while (ptr != NULL) {
        cout << "\tElement : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

node* atfirst(node* head, int data){
    node* ptr = new node();
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

void inbetween(node* second, node* third, int data){
    node* ptr = new node();
    second->next = ptr;
    ptr->data = data;
    ptr->next = third;
}

void atend(node* end, int data){
    node* ptr = new node();
    ptr->data = data;
    end->next = ptr;
    ptr->next = NULL;
}

void afternode(node* prevNode, int data){
    node* ptr = new node();
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
}

int main() {
    node* head;
    node* second;
    node* third;
    node* fourth;
    node* end;

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();
    end = new node();

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = end;

    end->data = 10;
    end->next = NULL;

    cout<<endl<<"--------Original--------"<<endl;
    traversal(head);

    head = atfirst(head,1);
    cout<<endl<<"--------At Beginning--------"<<endl;
    traversal(head);
    
    inbetween(second, third, 5);
    cout<<endl<<"--------In Between--------"<<endl;
    traversal(head);
    
    atend(end,11);
    cout<<endl<<"----------At End----------"<<endl;
    traversal(head);
    
    afternode(third,7);
    cout<<endl<<"--------After Node---------"<<endl;
    traversal(head);

    return 0;
}