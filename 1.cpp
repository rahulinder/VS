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

void sum(const A* o1_ptr, const A* o2_ptr, A* result_ptr) {

    result_ptr->x = o1_ptr->x + o2_ptr->x;
    result_ptr->y = o1_ptr->y + o2_ptr->y;
}

int main() {
    A ob1, ob2, ob3;
    
    ob1.setval(4, 8);
    ob2.setval(3, 6);

    sum(&ob1, &ob2, &ob3);

    cout << "Result in ob3: ";
    ob3.display();

    return 0;
}