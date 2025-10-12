#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;    
};

void display(node* head){
    node*curr = head;
    do{
        cout<<curr->data<<" <—> ";
        curr = curr->next;
    }while(curr != NULL);
    cout<<"NULL";
}

void mid(node* head){ cout<<endl<<endl;
    node* fast = head;
    node* slow = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    cout<<"Mid : "<<slow->data;
}

void reverse(node* head){
    node* curr = head;
}

int main(){
    node* head = new node();          node* fourth = new node();
    node* second = new node();      node* fifth = new node();
    node* third = new node();          node* sixth = new node();
    node* seventh = new node();

    head->data = 10;       head->next = second;
    second->data = 20;  second->next = third;
    third->data = 30;      third->next = fourth;
    fourth->data = 40;    fourth->next = fifth;
    fifth->data = 50;        fifth->next = sixth;
    sixth->data = 60;       sixth->next = seventh;
    seventh->data = 70;       seventh->next = NULL;

    display(head);

    mid(head);

    return 0;
}