#include<iostream>
using namespace std;

int main(){
    const int n=10,m=5;
    int arr[n]={0,1,0,2,0,3,0,4,0,5};
    int temp[m]={0};
    int j=0;
int zcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
        temp[j]=arr[i];  //'i' not used in temp[j] because "i" will update till 9 but temp[] has only 5 elements
    
        j++;
        }
        else 
        zcount++;
    }

    for(int i=0;i<m;i++){
        arr[i]=temp[i];
    }
for(int i=n-zcount;i<n;i++){
    arr[i]=0;
    
}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}