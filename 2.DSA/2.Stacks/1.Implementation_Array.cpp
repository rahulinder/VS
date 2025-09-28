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
    else{
        return 0;
    }
}

int isFull(stack* s){
    if(s->top != -1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    stack* s;
    
    s->size = 50;
    s->top = -1;
    s->arr = new int[s->size];
    
    s->arr[0]=10; s->top++;

    
    if(isEmpty(s)){
        cout<<"Stack is Empty";
    }
    
    if(isFull(s)){
        cout<<"Stack is Full";
    }
    // cout<<s->arr[0];

return 0;
}