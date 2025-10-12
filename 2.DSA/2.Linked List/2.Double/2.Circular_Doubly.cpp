#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;
};

void display(node* head) {
    cout<<endl;

    if (head->next == head) {
        cout << "\nList is empty." << endl;
        return;
    }
    node* curr = head;
    int i = 0;
    do {
        cout << curr->data << " <—> ";
        i++;
        curr = curr->next;
    } while (curr != head); 
    cout<<"("<<head->data<<")"<<endl<<"Total Nodes : "<<i<<endl;
}

void atfirst(node** head, int val){
    node* newNode = new node();
    newNode->data = val;
    if((*head)->next == *head){
        (*head)->next = newNode;
        newNode->prev = (*head);

        newNode->next = *head;
        (*head)->prev = newNode;

        *head = newNode;
    }
    else{
        newNode->next = *head;
        newNode->prev = (*head)->prev;

        (*head)->prev->next = newNode;
        (*head)->prev = newNode;

        *head = newNode;
    }
    display(*head);
}

void atend(node* head, int val){
    node* newNode = new node();
    newNode->data = val;
    if(head->next == head){
        head->next = newNode;
        newNode->prev = head;

        newNode->next = head;
        head->prev = newNode;
        
    }
    else{
        newNode->prev = head->prev;
        newNode->next = head;
        
        head->prev->next = newNode;
        head->prev = newNode;
        
    }
    display(head);
}

void at_index(node** head, int index, int val){
    node* newNode = new node();
    newNode->data = val;

    if(index == 1){
        newNode->prev = (*head)->prev;
        (*head)->prev->next = newNode;

        newNode->next = *head;
        (*head)->prev = newNode;

        *head = newNode;
        
    }
    else{
        node* curr = *head;
        int i = 1;
        do{
            curr = curr->next;
            i++;
        }while(i != index);
        
        newNode->next = curr;
        newNode->prev = curr->prev;
        
        curr->prev->next = newNode;
        curr->prev = newNode;
        
    }
    display(*head);
}

void after_data(node** head, int afterData, int val){
    node* newNode = new node();
    newNode->data = val;
    bool run = true;
    
    node* curr = *head;
    while(curr->data != afterData){
        curr = curr->next;
        if(curr->data != afterData && curr == *head){
            cout<<"Invalid Input";
            run = false;
            break;
        }
    }
    if(run != false){
        newNode->prev = curr;
        newNode->next = curr->next;
        
        curr->next->prev = newNode;
        curr->next = newNode;
    }
    display(*head);
}

void index_deletion(node** head, int index){
    
    if(index == 1){
        node* temp = *head;
        (*head)->next->prev = (*head)->prev;
        (*head)->prev->next = (*head)->next;
        
        *head = (*head)->prev->next;
        delete (temp);
    }
    else{
        node* curr = *head;
        node* temp = curr;
        int i = 1;
        while(i < index){
            curr = curr->next;
            temp = curr;
            i++;
        }
        curr->next->prev = curr->prev;
        curr->prev->next = curr->next;
        
        curr = curr->next;
        delete (temp);
    }
    display(*head);
}

node* data_deletion(node** head, int data){
    bool run = true;
    if((*head)->next == *head){
        cout<<"List only Head Node";
        return 0;
    }
    else if((*head)->data == data){
        node* temp = (*head);
        (*head)->next->prev = (*head)->prev;
        (*head)->prev->next = (*head)->next;
        
        *head = (*head)->next;
        delete (temp);
        
    }
    else{
        node* curr = *head;
        while(curr->data != data){
            curr = curr->next;
            if(curr == *head){
                cout<<"\n\nData not found\n\n";
                run = false;
                break;
            }
        }
        if(run != false){
            node* temp = curr;
            curr->next->prev = curr->prev;
            curr->prev->next = curr->next;
            
            delete (temp);
            
        }
    }
    display(*head);
}

int main(){
    node* head = new node();    node* second = new node();
    node* third = new node();    node* fourth = new node();

    head->data = 10;              second->data = 20;
    head->prev = fourth;      second->prev = head;
    head->next = second;        second->next = third;

    third->data = 30;              fourth->data = 40;
    third->prev = second;       fourth->prev = third;
    third->next = fourth;         fourth->next = head;
    
    int choice;
    cout<<"Enter Choice :\n1. Display\n2. Insertion at Beginning\n3. Insertion at End\n4. Insertion after Data\n5. Insertion after Data\n6. Deleting Node with Index\n7. Deleting Node using Data\n0. Exit\n";
    while(true){
        cout<<"\n————————————————————\nChoice : ";
        cin>>choice;
        cout<<"————————————————————\n";
        if(choice == 0){
            break;
        }
        else{
            switch(choice){
            
            case 1:
            display(head);
            break;
            
            case 2:{
            int data;
            cout<<"Enter Data to be inserted at Beginning : "; cin>>data;
            atfirst(&head, data);
            }
            break;
            
            case 3:{
            int data;
            cout<<"Enter Data to be inserted at End : "; cin>>data;
            atend(head, data);
            }
            break;
            
            case 4:{
            int afterData;
            int data;
            cout<<"Enter Data of the Node after which data is to be inserted : "; cin>>afterData;
            cout<<"Enter Data to be inserted after "<<afterData<<" : "; cin>>data;
            after_data(&head, afterData, data);
            }
            break;
            
            case 5:{
            int index;
            int data;
            cout<<"Enter Index of the Node after which data is to be inserted : "; cin>>index;
            cout<<"Enter Data to be inserted at index "<<index<<" : "; cin>>data;
            at_index(&head, index, data);
            }
            break;
            
            case 6:{
            int index;
            cout<<"Enter the Index of the Node to be deleted : "; cin>> index;
            index_deletion(&head, index); // Pass by reference now
            }
            break;
            
            case 7:
            {int data;
            cout<<"Enter the data  to be deleted : "; cin>> data;
            data_deletion(&head, data);
            }
            break;
            }
        }
    }

    return 0;
}