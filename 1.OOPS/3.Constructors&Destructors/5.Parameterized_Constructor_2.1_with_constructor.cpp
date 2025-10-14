//distance between 2 points using constructor
#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x;
    int y;
    friend double distance(point p1, point p2);

    public:
    point(int ,int);
};

point::point(int a, int b){
    x=a;
    y=b;
}

double distance(point p1, point p2){
        double d;
        d=sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
        cout<<d;
}

int main(){
    int x1,y1;
    int x2,y2;

    cout<<"Enter the value of x and y for 1st object : ";
    cin >> x1>>y1;
    cout<<"Enter the value of x and y for 2nd object : ";
    cin >> x2>>y2;
    
    point p1(x1,y1);   
    point p2(x2,y2);    

    distance(p1,p2);

return 0;
}