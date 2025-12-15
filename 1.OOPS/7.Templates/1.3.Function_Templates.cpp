#include<iostream>
using namespace std;
//1
template <class T>
void show(T a){  
    cout<<"a = "<<a<<endl;
}

//2
template<class R, int f>
void show(R b){ 
    cout<<"b = "<<b<<";  f = "<<f<<endl;
}

//3
template<class R, class S>
void show(R b, S d){ //3
    cout<<b<<", "<<d<<endl;
}
//4

void show(int size){//if a function is made without template, it will run first according to the value passed 
    cout<<"size = "<<size<<endl;
}

int main(){
    show(1);
    show(12.1);
    show('A');
    show ('B', 5);
    show <char ,10> ('B');// char defines what datatype is class R in function 2
    show ('B', 'D');

    return 0;
} 