#include <iostream>
using namespace std;

struct cque {
    int* arr;
    int front, rear;
    int size;
};

bool isFull(cque q) {
    return ((q.rear + 1) % q.size) == q.front;
}
bool isEmpty(cque q) {
    return q.front == -1;
}

void enqueue(cque& q, int value) {
    if (isFull(q)) {
        cout << "Queue is full!" << endl;
        return;
    }
    if (isEmpty(q)) {
        q.front = 0;
    }
    q.rear = (q.rear + 1) % q.size;
    q.arr[q.rear] = value;
}
void dequeue(cque& q) {
    if (isEmpty(q)) {
        cout << "Queue is empty!" << endl;
    }
    int item = q.arr[q.front];
    if (q.front == q.rear) {
        q.front = q.rear = -1;
    } else {
        q.front = (q.front + 1) % q.size;
    }
}

void display(cque q) {
    if (isEmpty(q)) {
        cout << "Queue is empty." << endl;
    }
    int i = q.front;
    while (true) {
        cout << q.arr[i] << " ";
        if (i == q.rear) {
            break;
        }
        i = (i + 1) % q.size;
    }
    cout << endl;
}

int main() {
    cque q;
    q.size = 5;
    q.front = q.rear = -1;
    q.arr = new int[q.size];

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    display(q);

    dequeue(q);
    display(q);

    enqueue(q, 50);
    enqueue(q, 60);
    display(q);

    enqueue(q, 70); 
    
    delete[] q.arr; 
    return 0;
}