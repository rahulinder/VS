#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;
};

void display(node* head){
    node* curr = head;
    while(curr != NULL){
        cout<<curr->data<<" => ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

node* atfirst(node* head, int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;

    head->prev = newNode;

    return newNode;    
}

void atend(node* head, int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next =  NULL;

    node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }

    newNode->prev = curr;
    curr->next = newNode;
}

void afterNode(node* head, int afterData, int val){
    node* newNode = new node();
    newNode->data = val;

    node* curr = head;
    while(curr->data != afterData){
        curr = curr->next;
    }

    newNode->prev = curr;
    newNode->next = curr->next;

    curr->next = newNode;
}

node* index_deletion(node*head, int index){
    node* curr = head;
    int i = 0;
    while(i != index){
        curr = curr->next;
        i++;
    }
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;

    delete (curr);
}

node* data_deletion(){}

int main(){
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = fourth;

    fourth->data = 40;
    fourth->prev = third;
    fourth->next = NULL;

    display(head);

    head = atfirst(head, 5);
    cout<<endl<<endl;

    display(head);

    atend(head, 50);
    cout<<endl<<endl;

    display(head);

    afterNode(head, 20, 25);
    cout<<endl<<endl;

    display(head);

    index_deletion(head, 4);
    cout<<endl<<endl;

    display(head);

    return 0;
}