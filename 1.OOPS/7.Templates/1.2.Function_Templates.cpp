#include<iostream>
using namespace std;

template <class T, int size>
void show(T a){
    cout<<"a = "<<a<<";\tsize = "<<size<<endl;
}

template <class T, int size>
void sum(T a){
    cout<<"\nsum = "<<a+size;
}

int main(){
    show <int, 10> (5);
    sum <int, 10> ('a');//ASSIC value of 'a' is passed

    return 0;
}