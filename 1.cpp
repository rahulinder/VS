#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void traverse(node* head){
    if (head == NULL) return;
    node*ptr = head;
    int i = 0;
    do{
        cout<<"Data at Node "<<++i<<" is : "<<ptr->data<<endl;
        ptr = ptr->next;
    }while(ptr != head);
}

node* atFirst(node* head, int val){
    node* newHead = new node();
    newHead->data = val;
    newHead->next = head;

    node* ptr = head;
    while(ptr->next != head){
        ptr = ptr->next;
    }
    ptr->next = newHead;

    return newHead;
}

void atEnd(node* head, int val){
    node* newEnd = new node();
    newEnd->data = val;

    node* ptr = head;
    while(ptr->next != head){
        ptr = ptr->next;
    }
    ptr->next = newEnd;
    newEnd->next = head;
}

node* deletion(node* head, int data){
    node* ptr = head;
    
    if(ptr->data == data){//For Head node
        node* lastNode = head;
        while(lastNode->next != head){
            lastNode = lastNode->next;
        }
        node* newHead = head->next;
        lastNode->next = newHead;
        delete head;
        return newHead;
    }
    // Case 2: Deleting a node other than the head
    else{
        node* prev = head;
        ptr = head->next;
        while(ptr != head && ptr->data != data){
            prev = ptr;
            ptr = ptr->next;
        }
        
        if(ptr != head){ // If node was found
            prev->next = ptr->next;
            delete ptr;
        }
        return head;
    }
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
    
    atEnd(head, 70);
    
    cout<<endl<<endl;
    traverse(head);
     
    head = deletion(head, 5);
    
    cout<<endl<<endl;
    traverse(head);

    return 0;
}