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

node* atfirst(node* head){
    node* ptr = head; /*create a pointer member of node structure pointing 
    toward head*/

    head = head->next; // here we update the value of head pointing towards next node 
    delete ptr;// deletes the first node
    return head;
}

node* inbetween(node* head, int index){
    node* p = head; //p holds the address of head
    node* q = head->next;// q holds the address stored in head->next(second)
    for(int i = 1; i < index-1; i++){
        p = p->next;        
        q = q->next;        
    }
    p->next = q->next;
    delete q;
    return head;
}

node* atend(node* head){
    node* p = head;
    node* q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    delete q;
    return head;
}

node* atvalue(node* head, int value){
    node* p = head;
    node* q = head->next;
    while(q->data != value && q->next != NULL){
    //loop executes until it finds value at q->data == value    
        p = p->next;
        q = q->next;
    }

    if(q->data == value){
        p->next = q->next;
        delete q;
    }
    return head;
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
    
    // head = atfirst(head);
    // // head = atfirst(head);
    // // head = atfirst(head);
    // cout<<endl<<"------Deleted FIRST Node-------"<<endl;
    // traverse(head);    
    
    // int index = 3;
    // head = inbetween(head, index);
    // cout<<endl<<"------Deleted "<<index<<" Node-------"<<endl;
    // traverse(head);
    
    // head = atend(head);
    // cout<<endl<<"------Deleted END Node-------"<<endl;
    // traverse(head);

    int value = 6;
    head = atvalue(head, value);
    cout<<endl<<"------Deleted "<<value<<" Node-------"<<endl;
    traverse(head);

return 0;
}