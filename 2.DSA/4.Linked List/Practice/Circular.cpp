#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void traverse(node* head){
    node* ptr = new node();
    ptr = head;
    int i = 1;
    cout<<"Element of Node "<<i<<" : "<<ptr->data<<endl; i++;
    ptr = ptr->next;

    while(ptr->next != head){
        cout<<"Element of Node "<<i<<" : "<<ptr->data<<endl;
        ptr = ptr->next;
        i++;
    }
}

int main(){
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();
    node* end = new node();
    
    head->data = 10;    
    head->next = second;    
    
    second->data = 20;    
    second->next = third;    
    
    third->data = 30;    
    third->next = fourth;    
    
    fourth->data = 40;    
    fourth->next = end;    
    
    end->data = 50;    
    end->next = head; 
    
    traverse(head);

return 0;
}