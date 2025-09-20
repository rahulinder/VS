#include<iostream>
using namespace std;

class number{
    int x=20;
    
    public:
    number(int x){
        x=x;// x assigining to itself due to local variable priority
        this->x=x;//this->x points to the x=20 variable in the private area of class

        cout<<x;
    }
};

int main(){
    number one(10);

return 0;
}