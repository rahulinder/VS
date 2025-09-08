#include<iostream>
using namespace std;

int main(){
    const int n = 10;
    int arr[n]={1,0,2,3,2,0,0,4,5,1};
    int z=0;//zero count

    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            z++;
        }
    }

    for(int j=0;j<=z;j++){
        for(int i=0;i<n;i++){    
            if (arr[i] == 0 && arr[i+1] != 0){
                arr[i] = arr[i+1];
                arr[i+1]=0;
            }
        }
    }    
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}