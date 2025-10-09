#include<iostream>
using namespace std;

int main(){
    const int n = 10;
    int arr[n] = {8,5,3,6,8,5,2,5,8,9,};

    cout<<"Unsorted"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"  ";
    }
    
    //decending    
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n-1; i++){
            if(arr[i] < arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    
    cout<<"\n\nSorted Descending"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"  ";
    }
    
    //ascending    
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    
    cout<<"\n\nSorted Ascending"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}