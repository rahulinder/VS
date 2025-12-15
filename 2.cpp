#include<iostream>
using namespace std;

class queue {
public:
    int front;
    int rear;
    int size;
    int *arr;
};

int isEmpty(queue* q) {
    if (q->front == q->rear) {
        return 1;
    }
    return 0;
}
int isFull(queue* q) {
    if ((q->rear + 1) % q->size == q->front) {
        return 1;
    }
    return 0;
}

void enque(queue* q, int val) {
    if (isFull(q)) {
        cout << "\n!Queue is Full\n";
        return;
    } else {
        // Increment rear circularly (q->rear = (q->rear + 1) % q->size;)
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] = val;
    }
}
int deque(queue* q) {
    int a = -1;
    if (isEmpty(q)) {
        cout << "\n!Queue is Empty\n";
        return a;
    } else {
        q->front = (q->front + 1) % q->size;
        a = q->arr[q->front];
        cout << "\nDequeued: " << a << endl;
        return a;
    }
}

int main() {
    queue q;
    q.size = 15;
    q.rear = q.front = 0;
    q.arr = new int[q.size];

    enque(&q, 10);
    enque(&q, 20);
    enque(&q, 30);

    deque(&q);
    deque(&q);
    
    enque(&q, 40);

    delete[] q.arr;
}