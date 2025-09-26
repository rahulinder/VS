#include<iostream>
using namespace std;

int main(){
    int* ptr;
    cout<<"             *ptr         = "<<*ptr<<endl<<endl;

    ptr = new int;

    cout<<"*ptr(after ptr = new int) = "<<*ptr<<endl<<endl;
    cout<<"              ptr         = "<<ptr<<endl<<endl;
    
    *ptr = 10;
    
    cout<<"*ptr(after *ptr = 10)     = "<<*ptr<<endl<<endl;

return 0;
}