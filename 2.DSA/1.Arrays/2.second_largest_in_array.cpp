#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,25,15,10,20};

    int largest=arr[0];
    int small2= -1;

    for(int i=1;i<5;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    cout<<largest<<" is the largest amongst all"<<endl;

    for(int i=1;i<5;i++){
        if(small2<arr[i] && arr[i]!=largest){ //at arr[i]=25, arr[i]!=largest becomes false
            small2=arr[i];
        }
    }
    cout<<small2<<" is the second largest amongst all"<<endl;

return 0;
}


