#include<iostream>
using namespace std;

template<class T1, class T2>
void show(T1 a, T2 b){
    cout<<"a = "<< a << ";  b = "<<b<< endl;
}

void show(int a, double b){
    cout<<"\nFor integer functions\n";
}

int main(){
    show(100, "Hello World");
    show(3, 4.1);
}