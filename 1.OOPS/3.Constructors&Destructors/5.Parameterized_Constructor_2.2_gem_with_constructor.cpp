#include<iostream>
#include<cmath> 
using namespace std;

class Points {
private:
    int x; 
    int y;

public:
    // Constructor to initialize the point's coordinates
    Points(int x_val = 0, int y_val = 0) : x(x_val), y(y_val) {}

    friend double calculateDistance(const Points& p1, const Points& p2);
};

double calculateDistance(const Points& p1, const Points& p2) {

    double distance = std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
    return distance;
}

int main() {
    int x1, y1, x2, y2;

    cout << "Enter the values of x1 and y1 for the 1st point: ";
    cin >> x1 >> y1;

    cout << "Enter the values of x2 and y2 for the 2nd point: ";
    cin >> x2 >> y2;

    // Create Points objects using the entered coordinates
    Points p1(x1, y1);
    Points p2(x2, y2);

    // Call the friend function to calculate the distance
    double dist = calculateDistance(p1, p2);

    cout << "The distance between the two points is: " << dist << std::endl;

    return 0;
}