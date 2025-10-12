#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* prev;
    node* next;
};

void display(node* head){
    cout << endl;

    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    node* curr = head;
    cout << "NULL <= ";
    while(curr != NULL){
        cout << curr->data << " <=> ";
        curr = curr->next;
    }
    cout << "\b\b\b\b=> NULL" << endl;
}

node* atfirst(node* head, int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;

    // If the list was not empty, update old head's prev
    if (head != NULL) {
        head->prev = newNode;
    }

    return newNode;
}

void atend(node* head, int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next =  NULL;

    // If list is empty, new node is the head
    if (head == NULL) {
        head = newNode; // This change won't reflect in main, better to handle in main or pass by reference
        cout << "Warning: List was empty. This function can't change head." << endl;
        return;
    }

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
    // Find the node to insert after
    while(curr != NULL && curr->data != afterData){
        curr = curr->next;
    }

    // If afterData was not found in the list
    if (curr == NULL) {
        cout << "Node with data " << afterData << " not found." << endl;
        delete newNode; // Avoid memory leak
        return;
    }

    newNode->prev = curr;
    newNode->next = curr->next;
    curr->next = newNode;

    // If the new node is not the last node
    if (newNode->next != NULL) {
        newNode->next->prev = newNode;
    }
}

void index_deletion(node*& head, int index){
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    node* curr = head;
    if (index == 1) {//Head
        head = curr->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete curr;
        return;
    }

    // Traverse to the node to be deleted
    int i = 1;
    while(i < index && curr != NULL){
        curr = curr->next;
        i++;
    }

    // If index is out of bounds
    if (curr == NULL) {
        cout << "Index out of bounds." << endl;
        return;
    }

    // Re-link the surrounding nodes
    curr->prev->next = curr->next;
    if (curr->next != NULL) { // If it's not the last node
        curr->next->prev = curr->prev;
    }

    delete curr;
}

void data_deletion(node** head, int data){
    node* curr = *head;

    // Find the node with the given data
    while(curr != NULL && curr->data != data){
        curr = curr->next;
    }

    // Case 1: Node not found
    if (curr == NULL) {
        cout << "Node with data " << data << " not found." << endl;
        return;
    }

    // Case 2: Node is the head
    if (curr == *head) {
        *head = curr->next;
    }

    // Case 3: Re-link previous node (if it exists)
    if (curr->prev != NULL) {
        curr->prev->next = curr->next;
    }
    
    // Case 4: Re-link next node (if it exists)
    if (curr->next != NULL) {
        curr->next->prev = curr->prev;
    }
    
    delete curr; // Free the memory
}

int main(){
    node* head = new node();    node* second = new node();
    node* third = new node();   node* fourth = new node();

    head->data = 10;        second->data = 20;
    head->prev = NULL;      second->prev = head;
    head->next = second;    second->next = third;

    third->data = 30;       fourth->data = 40;
    third->prev = second;   fourth->prev = third;
    third->next = fourth;   fourth->next = NULL;

    while(true){
        int choice;
        cout<<"\nEnter Choice :\n1. Display\n2. Insertion at Beginning\n3. Insertion at End\n4. Insertion after Data\n5. Deleting Node with Index\n6. Deleting Node using Data\n0. Exit\n\nChoice : ";
        cin>>choice;
        if(choice == 0){
            break;
        }
        else{
            switch(choice){
            
            case 1:
            display(head);
            break;
            
            case 2:
            {int data;
            cout<<"Enter Data to be inserted at Beginning : "; cin>>data;
            head = atfirst(head, data);
            display(head);}
            break;
            
            case 3:
            {int data;
            cout<<"Enter Data to be inserted at end : "; cin>>data;
            atend(head, data);
            display(head);}
            break;
            
            case 4:
            {int afterData;
            int data;
            cout<<"Enter Data of the Node after which data is to be inserted : "; cin>>afterData;
            cout<<"Enter Data to be inserted after "<<afterData<<" : "; cin>>data;
            afterNode(head, afterData, data);
            display(head);}
            break;
            
            case 5:
            {int index;
            cout<<"Enter the Index of the Node to be deleted (1-based) : "; cin>> index;
            index_deletion(head, index); // Pass by reference now
            display(head);}
            break;
            
            case 6:
            {int data;
            cout<<"Enter the data  to be deleted : "; cin>> data;
            data_deletion(&head, data);
            display(head);}
            break;
            }
        }
    }
    
    return 0;
}