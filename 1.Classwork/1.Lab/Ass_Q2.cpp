// Write a program using Array of Objects to display area of multiple rectangles.
#include<iostream>
using namespace std;

class rectangle{
    int l;
    int b;
    public:
    int area;
    void setval(){
        cout<<"Enter the value of L and B : ";
        cin>>l>>b; 
    }
    void rect_area(){
        area= l*b;
    }
};

int main(){
    const int n = 4;
    rectangle r[n];
    for(int i=0;i<n;i++){
        cout<<"Rectangle : "<<i+1<<endl;
        r[i].setval();
        r[i].rect_area();
        cout<<"Area of rectangle "<<i+1<<" is "<<r[i].area<<endl;

        cin.ignore();
    }

return 0;
}