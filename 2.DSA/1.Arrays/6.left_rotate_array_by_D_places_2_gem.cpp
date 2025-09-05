#include<iostream>
using namespace std;

int main(){
    const int d=4;
    const int n=10;
    int arr[n]={0,1,2,3,4,5,6,7,8,9};
    int temp[d];

    // 1. Store the first d elements in a temp array
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }

    // 2. Shift the remaining elements to the left
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }
    
    // 3. Copy the stored elements back to the end
    for(int i=0; i<d; i++){
        arr[n-d+i] = temp[i];
    }

    cout << d << " places rotated array:" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}