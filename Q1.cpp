#include<iostream>
using namespace std;

class rectangle{
    int length;
    int breadth;

    public:

    rectangle(){}
    
    rectangle(int l , int b){
        length = l;
        breadth = b;
    }
    
    rectangle(int l){
        length = l;
        breadth = 5;
    }
    
    int area(int l , int b){
        float area;
        area = l*b;
        return area;
    }
};

int main(){
    

return 0;

}