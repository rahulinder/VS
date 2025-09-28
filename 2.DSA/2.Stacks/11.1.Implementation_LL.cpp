#include<iostream>
using namespace std;
int size = 5;

struct node{
    int data;
    node* next;
};
int isFull(node* top){
    if(top->next != NULL){
        return 1;
    }
    return 0;
}
int isEmpty(node* top){
        if(top->next == NULL){
        return 1;
    }
    return 0;
}

void traversal(node* top){
    node* ptr = top;
    while(ptr != NULL){
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

void push(node*& top, int data){
    node* ptr = new node();
    ptr->data = top->data;
    ptr->next = top->next;

    top->data = data;
    top->next = ptr;    
}
void pop(node*& top){
    if(top->next == NULL){cout<<"Stack is Empty, NO POP";}
    else{
        node* ptr = new node();
        ptr = top;

        top = top->next;

        delete ptr;
    }        
}
void peek(node* top){}

int main(){
    node* top = new node();
    top->data = 10; top->next = NULL;

    if(isFull(top)){
        cout<<"Stack is Full";
    }
    else{
        cout<<"Stack is Empty";
    }
    
    push(top, 20);
    push(top, 30);
    push(top, 40);
    push(top, 50);

    cout<<endl;

    traversal(top);
    
    pop(top);
    cout<<endl;
    traversal(top);

    return 0;
}