// distance b/w two points, no constructor used
#include<iostream>
#include<cmath>
using namespace std;

class points{ //created points class 
    int x;
    int y;
    friend double dist(points& p1, points& p2);

    public:
    void set_pts(int x_val,int y_val){
        x=x_val;
        y=y_val;
    }
};

double dist( points& p1, points& p2) {
    double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distance;
}

int main(){
    int x1,x2;  // takes input for coordinates form user 
    int y1,y2;

    points pt1,pt2; // created two objects for different positions

    cout<< "Enter the values of x1 and y1 for 1st object: ";
    cin>>x1>>y1;
    pt1.set_pts(x1,y1);

    cout<< "Enter the values of x2 and y2 for 2nd object: ";
    cin>>x2>>y2;
    pt2.set_pts(x2,y2);

    double distn;
    distn = dist(pt1 , pt2);

    cout<<"The distance between two points is :"<< dist<<endl;
    
    return 0;
}