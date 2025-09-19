/*
Deletion :
-at the beginning of list 
-at the end of list
-in between two nodes
-after a node
*/
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void traverse(node* ptr){
    int i = 1;
    while(ptr!=NULL){
        cout << "\tNode "<<i<<" : "<<ptr->data<<endl;
        ptr = ptr->next;
        i++;
    }
}

node* atfirst(node* second){
    node* ptr = new node();
    ptr->next = second->next;
    ptr->data = second->data;
    return ptr;
}

int main(){
    node* head;
    node* second;
    node* third;
    node* fourth;
    node* fifth;
    node* end;

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();
    fifth = new node();
    end = new node();

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = fifth;

    fifth->data = 10;
    fifth->next = end;

    end->data = 12;
    end->next = NULL;

    cout<<"--------Original Node--------"<<endl;
    traverse(head);
    
    head = atfirst(second);
    free(second);
    cout<<endl<<"------Deleted First Node-------"<<endl;
    traverse(head);    
    
return 0;
}