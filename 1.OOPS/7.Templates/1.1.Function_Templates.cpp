#include<iostream>
using namespace std;

template <class T>

void show (T a){
    cout<<a<<endl;
}

int main(){
    show(123);
    show(45.6);
    show(-100);
    show('R');
    show("Hello");

    return 0;
}