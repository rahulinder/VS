#include<iostream>
using namespace std;

struct queue{
    int size;
    int f;
    int r;
    int* arr;
};

int isFull(queue q){
    return q.r == q.size-1;
}
int isEmpty(queue q){
    return q.r == q.f;
}

void enque(queue& q, int val){
    if(isFull(q)){
        cout<<"Error! Queue is Full";
    }
    else{
        q.r++;
        q.arr[q.r] = val;
    }
}
void deque(queue& q){
    if(isEmpty(q)){
        cout<<"Error! Queue is empty";
    }
    else{
        q.f++;
    }
}

void traverse(queue q){
    for(int i = q.f+1; i <= q.r; i++){
        cout<<q.arr[i]<<endl;
    }
}

int main(){
    queue q;
    
    q.size = 5;
    q.f = q.r = -1;
    q.arr = new int[q.size];

    if(isFull(q)){
        cout<<"Queue is Full";
    }
    else{
        cout<<"Queue is Empty";
    }

    cout<<"Enqueing...."<<endl;

    enque(q,10);
    enque(q,20);
    enque(q,30);
    enque(q,40);
    enque(q,50);

    traverse(q);

    cout<<"Dequeing...."<<endl;

    deque(q);
    deque(q);

    traverse(q);

    return 0;
}