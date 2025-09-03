// distance b/w two points, no constructor used
#include<iostream>
#include<cmath>
using namespace std;

class Points {
private:
    int x;
    int y;

public:
    void set_coordinates(int x_val, int y_val) {
        x = x_val;
        y = y_val;
    }

    friend double calculateDistance(const Points& p1, const Points& p2);
};

double calculateDistance(const Points& p1, const Points& p2) {
    double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distance;
}

int main() {
    int x1, y1, x2, y2;
    Points p1, p2;

    cout << "Enter the values of x1 and y1 for the 1st point: ";
    cin >> x1 >> y1;
    p1.set_coordinates(x1, y1);

    cout << "Enter the values of x2 and y2 for the 2nd point: ";
    cin >> x2 >> y2;
    p2.set_coordinates(x2, y2);

    double dist = calculateDistance(p1, p2);

    cout << "The distance between the two points is: " << dist << endl;

    return 0;
}