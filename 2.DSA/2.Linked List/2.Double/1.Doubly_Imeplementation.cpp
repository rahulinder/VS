#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;
};

void display(node* head){
    cout<<endl;

    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }    
    node* curr = head;
    cout<<"NULL <= ";
    while(curr != NULL){
        cout<<curr->data<<" <=> ";
        curr = curr->next;
    }
    cout << "\b\b\b\b=> NULL" << endl;
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

void index_deletion(node*head, int index){
    node* curr = head;
    int i = 1;// Current node of curr
    while(i != index){
        curr = curr->next;
        i++;
    }
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;

    delete (curr);
}

void data_deletion(node** head, int data){
    node* curr = *head;

    if((*head)->data == data){
        (*head)->next->prev = NULL;
        *head = (*head)->next;
        delete curr;
    }
    else{
            while(curr->data != data){
            curr = curr->next;
        }
    }
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
}

int main(){
    node* head = new node();    node* second = new node();
    node* third = new node();    node* fourth = new node();


    head->data = 10;    second->data = 20;
    head->prev = NULL;    second->prev = head;
    head->next = second;    second->next = third;

    third->data = 30;    fourth->data = 40;
    third->prev = second;    fourth->prev = third;
    third->next = fourth;    fourth->next = NULL;

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
            cout<<"Enter the Index of the Node to be deleted : "; cin>> index;
            index_deletion(head, index);        
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