#include<iostream>
using namespace std;

int main(){
    const int d=4;
    const int n=10;
    int arr[n]={0,1,2,3,4,5,6,7,8,9};
    int temp[d];
    
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    int temp2;
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    cout<<endl<<endl;
    cout<<"half rotated array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[j];
        j++;
    }

    cout<<endl<<endl;
    cout<<d<<" places rotated array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}