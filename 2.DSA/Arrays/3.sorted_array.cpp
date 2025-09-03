#include<iostream>
using namespace std;

int main(){
    int arr[5]={4,2,1,5,3};
    int size = 5;

    for(int i=0;i< size ;i++){
        cout<<"\nUnsorted ";
        cout<<arr[i];
    }
    cout<<endl;

    for(int j=0;j<size-1;j++){
        for(int i=0;i<4;i++){    
            if( arr[i] > arr[i+1] ){
                int temp= arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }   
    }
    cout<<endl;

    for(int i=0;i<size;i++){
        cout<<"\nSorted ";
        cout<<arr[i];
    }
    cout<<endl;

return 0;
}