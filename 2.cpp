#include<iostream>
using namespace std;

class A {
public:
    int x, y;

    void setval(int x1, int y1) {
        x = x1;
        y = y1;
    }

    // Added a display function to see the results.
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

A sum(A o1, A o2) {
    A temp;
    temp.x = o1.x + o2.x;
    temp.y = o1.y + o2.y;
    return temp;
}

int main() {
    A ob1, ob2, ob3;
    ob1.setval(4, 8);
    ob2.setval(3, 6);

    // ob3 receives the object returned from the sum function.
    ob3 = sum(ob1, ob2);

    cout << "Result in ob3: ";
    ob3.display(); // Displays: x = 7, y = 14

    return 0;
}