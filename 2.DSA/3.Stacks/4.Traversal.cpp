#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int* arr;
};

int isEmpty(stack* s){
    return s->top == -1;
}
int isFull(stack* s){
    return s->top == s->size - 1;
}
int ontop(stack* s){
    return s->arr[s->top];
}
int atbottom(stack* s){
    return s->arr[0];
}
void push(stack* s, int val){
    if(isFull(s)){
        cout << "Stack Overflow! Cannot push " << val << endl;
    }
    else{
        s->top++;
        s->arr[s->top] = val;
    }
}

void traversal(stack* s){
    if(isEmpty(s)){
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements (top to bottom):" << endl;
    for(int i = s->top; i >= 0; i--){
        cout << s->arr[i] << endl;
    }
}

int main(){
    stack* s = new stack();

    s->size = 5;
    s->top = -1;
    s->arr = new int[s->size];
    int val;

    while(!isFull(s)){
        cin >> val;
        push(s, val);
    }
    
    cout << "\n--- Traversal ---" << endl;
    traversal(s);

    cout<<"On Top = "<<ontop(s)<<endl;
    cout<<"At Bottom = "<<atbottom(s)<<endl;

    return 0;
}