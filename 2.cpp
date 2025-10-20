#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point(int x_val = 0, int y_val = 0) {
        x = x_val;
        y = y_val;
    }
    Point operator +(const Point& other) {
        Point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(10, 20);
    Point p2(5, 3);
    
    // Use the overloaded + operator
    Point p3 = p1 + p2;

    cout << "Point 1: ";
    p1.display();
    
    cout << "Point 2: ";
    p2.display();

    cout << "Sum (p1 + p2): ";
    p3.display();

    return 0;
}