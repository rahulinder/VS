#include<iostream>
using namespace std;

class A{
    int x;
    public:
    A(int x){
        x = x ;
        cout<<x<<endl;

        this->x; //this contains the address of the object
        //pointing to the x variable of the object
        cout<<this->x<<endl;
    }
    
};

int main(){
    A ob(10);

return 0;
}