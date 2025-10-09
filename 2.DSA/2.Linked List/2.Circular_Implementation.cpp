#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void traverse(node* head){
    node*ptr = head;
    int i = 0;
    while(ptr->next != head){
        cout<<"Data at Node "<<++i<<" is : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

node* atFirst(node* head, int val){
    node* newHead = new node();
    newHead->data = val;
    newHead->next = head;

    return newHead;
}

int main(){
    node* head = new node();          node* fourth = new node();
    node* second = new node();      node* fifth = new node();
    node* third = new node();          node* sixth = new node();

    head->data = 10;           head->next = second;
    second->data = 20;       second->next = third;
    third->data = 30;           third->next = fourth;
    fourth->data = 40;         fourth->next = fifth;
    fifth->data = 50;             fifth->next = sixth;
    sixth->data = 60;            sixth->next = head;

    traverse(head);
    
    head = atFirst(head, 5);
    
    cout<<endl<<endl;
    traverse(head);
    

    return 0;
}