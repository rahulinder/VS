#include<iostream>
using namespace std;

int places(int d,int n){
    if(d<=n){
        return d;
    }
    else{
        d=d%n;
        return d;
    }
}
int main(){
    const int n=5;
    int arr[n]={1,2,3,4,5};
    int temp;
    int d;
    
    cout<<"Enter d : "; 
    cin>>d; 

    for(int i=0;i<places(d,n);i++){
        for(int i=0;i<n;i++){
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}
