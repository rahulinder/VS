#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int isEmpty(node* top){
    return top == NULL;
}

void push(node*& top, int data){
    node* ptr = new node();
    ptr->data = data;
    ptr->next = top;
    top = ptr; 
}
int pop(node*& top){
    if(isEmpty(top)){
        cout << "Stack Underflow, cannot pop!" << endl;
        return -1;
    }
    else{
        node* ptr = top;
        int value = ptr->data;
        top = top->next;
        delete ptr;
        return value;
    }
}

int stackTop(node* top){
    if(isEmpty(top)){
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return top->data;
}
int stackBottom(node* top){
    if(isEmpty(top)){
        cout << "Stack is empty!" << endl;
        return -1;
    }
    node* ptr = top;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    return ptr->data;
}
void peek(node* top, int position){
    if(isEmpty(top)){
        cout << "Stack is empty, cannot peek!" << endl;
        return;
    }
    node* ptr = top;
    for (int i = 0; (i < position - 1 && ptr != NULL); i++){
        ptr = ptr->next;
    }

    if(ptr != NULL){
        cout << "Value at position " << position << " is " << ptr->data << endl;
    } else {
        cout << "Invalid position!" << endl;
    }
}

void traversal(node* top){
    node* ptr = top;
    cout << "--- Stack (Top to Bottom) ---" << endl;
    while(ptr != NULL){
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << "---------------------------" << endl;
}

int main(){
    node* top = NULL;

    push(top, 10);
    push(top, 20);
    push(top, 30);
    push(top, 40);

    traversal(top);

    cout << "\nElement at top is: " << stackTop(top) << endl;
    cout << "Element at bottom is: " << stackBottom(top) << endl;

    cout << "\nPeeking at different positions:" << endl;
    peek(top, 3); 
    
    pop(top);
    
    cout << "\nAfter popping once:" << endl;
    traversal(top);
    cout << "New element at top is: " << stackTop(top) << endl;

    return 0;
}