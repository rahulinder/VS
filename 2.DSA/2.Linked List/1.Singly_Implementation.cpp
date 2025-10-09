#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    friend void traversal(node* head);

};

void traversal(node* head){
    node* ptr = head;
    int i = 0;
    while(ptr->next != NULL){
        cout<<"Data of node "<<++i<<" is : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

node* atfirst(node* head, int val){
    node* newhead = new node();
    newhead->data = val;
    newhead->next = head;
    return newhead;
}

void atend(node* head, int val){
    node* newend = new node();
    node* ptr = head;
    newend->data = val;
    newend->next = NULL;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = newend;
}

void afternode(node* head, int afterData, int val){
    node* newnode = new node();
    node* ptr = head;
    newnode->data = val;
    while(ptr->data != afterData){
        ptr = ptr->next;
    }
    newnode->next = ptr->next;
    ptr->next = newnode;
}

void deletion(node* head, int Data){
    node* ptr = head;
    node* ptr2 = ptr;
    while(ptr->data != Data){
        ptr2 = ptr;
        ptr = ptr->next;
    }
    ptr2->next = ptr->next;
    delete (ptr);
}

int main(){
    node* head = new node();          node* fourth = new node();
    node* second = new node();      node* fifth = new node();
    node* third = new node();          node* sixth = new node();

    head->data = 10;       head->next = second;
    second->data = 20;  second->next = third;
    third->data = 30;      third->next = fourth;
    fourth->data = 40;    fourth->next = fifth;
    fifth->data = 50;        fifth->next = sixth;
    sixth->data = 60;       sixth->next = NULL;

    traversal(head);
    
    head = atfirst(head, 5);
    
    cout<<endl<<endl;
    traversal(head);

    atend(head, 60);
    
    cout<<endl<<endl;
    traversal(head);

    afternode(head, 30, 35);
    
    cout<<endl<<endl;
    traversal(head);

    deletion(head, 60);
    
    cout<<endl<<endl;
    traversal(head);

    return 0;
}