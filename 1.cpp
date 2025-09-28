#include <iostream>
using namespace std;

struct CircularQueue {
    int* arr;
    int size;
    int front;
    int rear;

    ~CircularQueue() {
        delete[] arr;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << val << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % size;
        arr[rear] = val;
        cout << val << " enqueued to queue." << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1;
        }
        int val = arr[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % size;
        }
        return val;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Elements in queue: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) {
                break;
            }
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;
        q.size = 5;
        q.arr = new int[q.size];
        q.front = -1;
        q.rear = -1;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    
    q.display();
    q.enqueue(60); 

    cout << "\nDequeued element: " << q.dequeue() << endl;
    cout << "Dequeued element: " << q.dequeue() << endl;
    
    q.display();

    cout << "\nEnqueuing again to demonstrate wrap-around..." << endl;
    q.enqueue(70);
    q.enqueue(80);

    q.display();
    
    return 0;
}