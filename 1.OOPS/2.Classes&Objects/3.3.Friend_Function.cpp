#include<iostream>
using namespace std;

class B;

class A{
    int val1;
    friend void swap(A& , B&);
    public:
    void setval1(int input1){
        val1=input1;
    }
};

class B{
    int val2;
    friend void swap(A& , B&);
    public:
    void setval2(int input2){
        val2=input2;
    }
};

void swap(A& ob1, B& ob2){
    int temp;
    temp = ob1.val1;
    ob1.val1 = ob2.val2;
    ob2.val2=temp;

    //cout<<"Swapped value of a : "
}

int main(){
    int a;
    int b;

    cout<<"Enter the value of a and b :";
    cin>>a>>b;

    cout<<a<<" "<<b<<endl;

    A input1;
    input1.setval1(a);

    B input2;
    input2.setval2(b);

    swap(a,b);

    cout<<a<<" "<<b<<endl;

    return 0;
}