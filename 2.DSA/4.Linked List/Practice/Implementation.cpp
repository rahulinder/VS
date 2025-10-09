#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void traverse(node* ptr) {
    int  i = 1;
    while (ptr != NULL) {
        cout << "Element of Node "<<i<<" : " << ptr->data << endl;
        ptr = ptr->next;
        i++;
    }
}

void atfirst(node*& head, int val){
    node* ptr  = new node();
    ptr->data = val;
    ptr->next = head;
    head = ptr;
}

void atend(node*& end, int val){
    node* ptr = new node();
    ptr->data = val;
    end->next = ptr;
    ptr->next = NULL;

}

void after(node* head,int data, int val){
    node* ptr = new node();
    ptr->data = val;
    node* p = head;
    ptr->data = val;
    while(p->data != data){
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
}

void del(node* head, int data){
    node* p = head;
    node* q = head->next;
    while(q->data != data){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    delete q;
    head = p;
}

int main(){
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* end = new node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = end;

    end->data = 40;
    end->next = NULL;

    traverse(head);
    
    cout<<"\nAtfirst"<<endl;
    atfirst(head, 5);
    traverse(head);

    cout<<"\nAtend"<<endl;
    atend(end, 45);
    traverse(head);
    
    cout<<"\nAfter"<<endl;
    after(head, 10, 15);
    traverse(head);
    
    cout<<"\nDeletion"<<endl;
    del(head, 30);
    traverse(head);

 
    return 0;
}