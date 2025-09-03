#include<iostream>
using namespace std;

int main(){
    int arr[7]={4,4,2,1,5,5,3};
    int size = 7;

    for(int i=0;i< size ;i++){
        cout<<"\nUnsorted";
        cout<<arr[i];
    }
    cout<<endl;

    for(int j=0;j<size-1;j++){
        for(int i=0;i<size-1;i++){    
            if( arr[i] > arr[i+1] ){
                int temp= arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }   
    }

    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<"\nSorted";
        cout<<arr[i];
    }

    cout<<endl<<endl;
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            arr[i+1]=0;
        }
        cout<<arr[i]<<endl;
    } 

    return 0;
}