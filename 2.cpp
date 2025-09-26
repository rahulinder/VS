#include<iostream>
using namespace std;

int main(){
    int score [] = {100, 95, 80};
    int* ptr = score;

    cout<<"-------score[0]-------"<<endl;
    cout<<score[0]<<endl;
    cout<<score[1]<<endl;
    cout<<score[2]<<endl;
    
    cout<<"-------ptr[0]-------"<<endl;
    cout<<ptr[0]<<endl;
    cout<<ptr[1]<<endl;
    cout<<ptr[2]<<endl;
    
    cout<<"-------*(score + n)-------"<<endl;
    cout<<*score<<endl;
    cout<<*(score + 1)<<endl;
    cout<<*(score + 2)<<endl;
    
    cout<<"-------*(ptr + n)-------"<<endl;
    cout<<*ptr<<endl;
    cout<<*(ptr + 1)<<endl;
    cout<<*(ptr + 2)<<endl;

    return 0;
}