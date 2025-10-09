#include<iostream>
using namespace std;

struct queue{
    int size;
    int f;
    int r;
    int* arr;
};

int isFull(queue* q){
    return q->r == q->size-1;
}
int isEmpty(queue* q){
    return q->f == q->r;
}

void enque(queue* q, int val){
    if(isFull(q)){
        cout<<"Queue is full"<<endl;
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }
}
int deque(queue* q){
    int val = -1;
    if(isEmpty(q)){
        cout<<"Queue is empty"<<endl;
    }
    else{
        q->f++;
        val = q->arr[q->f];
    }
    return val;
}

void traverse(queue* q){
    for (int i = q->f + 1; i <= q->r; i++)
    {
        cout<<q->arr[i]<<endl;
    }
}

int main(){
    queue q;
    q.size = 5;
    q.f = q.r = -1;
    q.arr = new int[q.size];

    cout<<"Enqueuing elements..."<<endl;
    enque(&q, 10);
    enque(&q, 20);
    enque(&q, 30);
    enque(&q, 40);
    enque(&q, 50);

    cout<<"\nQueue elements:"<<endl;
    traverse(&q);
    
    deque(&q);
    deque(&q);

    cout<<"\nQueue elements after dequeuing:"<<endl;
    traverse(&q);

    delete[] q.arr;
    return 0;
}