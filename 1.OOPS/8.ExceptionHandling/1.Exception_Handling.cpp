#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter a and b :";
    cin>>a>>b;
    try{
        if(b != 0){
            cout<<a/b;
        }
        else{
            throw a;    
        }
    }

    catch(int a){
        cout<<"\nb cannot be 0\n";
    }

    return 0;
}