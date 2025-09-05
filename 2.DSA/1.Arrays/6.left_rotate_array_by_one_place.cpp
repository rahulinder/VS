#include<iostream>
using namespace std;

int main(){
    const int n=5;
    int arr[5]={1,2,3,4,5};
    int temp;

    // for(int i=0;i<n;i++){
    //     temp=arr[i+1];
    //     arr[i+1]=arr[i];
    //     arr[i]=temp;
    // }
    for(int i=0;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[4]=1;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}