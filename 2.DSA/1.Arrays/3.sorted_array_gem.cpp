#include<iostream>
using namespace std;

int main(){
    int arr[5] = {4, 2, 1, 5, 3};
    int size = 5;

    cout << "Unsorted Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Correct Bubble Sort implementation
    for(int j = 0; j < size - 1; j++){ // Outer loop for multiple passes
        for(int i = 0; i < size - 1 - j; i++){ // Inner loop for comparisons
            if(arr[i] > arr[i+1]){
                // Swap elements
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}