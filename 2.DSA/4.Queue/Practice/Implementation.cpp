#include<iostream>
using namespace std;

struct queue{
        int size;
        int front;
        int rear;
        int* arr;
};

int isFull(queue q){
    return q.rear == q.size-1;
}
int isEmpty(queue q){
    return q.front == q.rear;
}

void enque(queue*& q, int val){
    
}

int main(){
    queue q;
    q.size = 5;
    q.front = q.rear = -1;
    q.arr = new int[q.size];

return 0;
}