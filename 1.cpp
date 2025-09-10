#include<iostream>
using namespace std;

class A {
public:
    int x, y;
    void setval(int x1, int y1) {
        x = x1;
        y = y1;
    }
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

A* sum(A* o1_ptr, A* o2_ptr) {
    A* temp_ptr = new A();
    temp_ptr->x = o1_ptr->x + o2_ptr->x;
    temp_ptr->y = o1_ptr->y + o2_ptr->y;

    return temp_ptr;

int main() {
    A ob1, ob2;
    ob1.setval(4, 8);
    ob2.setval(3, 6);

    A* ob3_ptr;

    ob3_ptr = sum(&ob1, &ob2);

    cout << "Result pointed to by ob3_ptr: ";
    ob3_ptr->display(); // Displays: x = 7, y = 14

    // CRITICAL: We must free the memory we allocated with 'new'.
    delete ob3_ptr;

    return 0;
}