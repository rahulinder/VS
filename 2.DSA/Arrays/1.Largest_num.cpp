#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,25,15,10,25};

    int x=arr[0];

    for(int i=1;i<5;i++){
        if(x<arr[i]){
            x=arr[i];
        }
    }
       cout<<x<<" is the largest amongst all"<<endl;

return 0;
}