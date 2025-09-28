#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int* arr;
};

int isEmpty(stack* s){
    if(s->top == -1){
        return 1;
    }
    return 0;
}
int isFull(stack* s){
    if(s->top == s->size - 1){
        return 1;
    }
    return 0; 
}

void push(stack* ptr, int val){
    if(isFull(ptr)){
        cout << "Stack Overflow! Cannot push " << val << " to the stack" << endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        // cout << val << " was pushed to the stack." << endl;
    }
}
int pop(stack* ptr){
    if(isEmpty(ptr)){
        cout << "Stack Underflow! Cannot pop from the stack" << endl;
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(stack* ptr, int position){
    int index = ptr->top - position+1; // top is the final/last position of the array
    if(index < 0){
        cout << "Not a valid position for the stack" << endl;
        return -1; 
    }
    else{
        return ptr->arr[index];
    }
}

int main(){
    stack* s = new stack();
    s->size = 10; 
    s->top = -1;
    s->arr = new int[s->size];
    int i = 0;
    int v;
    while(i < s->size){
        // cout<<"Enter for "<<i<<" array : "; 
        cin>>v;
        push(s,v);
        i++;
    }
    int index = 0; cin>>index;
    cout<<"Value at position "<<index<<" is : "<<peek(s,index);

    return 0;
}