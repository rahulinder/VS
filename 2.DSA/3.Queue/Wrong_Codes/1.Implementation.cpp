#include<iostream>
using namespace std;

struct queue{
    int size;
    int f; //front
    int r; //rear
    int* arr;
};

void traverse(queue* q){
    for (int i = q->f+1; i <= q->r; i++)
    {
        cout<<q->arr[i]<<endl;
    }
}

int isFull(queue q){
    return q.r == q.size-1;
}
int isEmpty(queue q){
    return q.r == q.f;
}

void enque(queue& q,int val){
    if(isFull(q)){
        cout<<"Queue is full";
    }
    else{
        q.r++;
        q.arr[q.r] = val;
    }
}
void deque(queue& q){
    if(isEmpty(q)){
        cout<<"Queue is Empty";
    }
    else{
        int i = 0;
        while(i < q.r){
            q.arr[i] = q.arr[i+1];
            i++;
        }
        q.r--;
    }
}

int main(){
    queue q;
    q.size = 5;
    q.f = q.r = -1;
    q.arr = new int[q.size];

    enque(q,1); q.f++;
    enque(q,2);
    enque(q,3);
    enque(q,4);
    enque(q,5);

    traverse(&q);
    
    cout<<"\nAfter Dequeuing"<<endl;
    deque(q);
    traverse(&q);

    return 0;
}