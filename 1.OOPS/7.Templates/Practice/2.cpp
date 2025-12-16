#include<iostream>
using namespace std;

template<typename T>

void bubbleSort(T a[], int n) {  
for (int i = 0; i < n - 1; i++)  
    for (int j = n - 1; i < j; j--)  
        if (a[j] < a[j - 1])  
            swap(a[j], a[j - 1]);  
}

int main(){
    const int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};

    bubbleSort(arr, n);
    
    return 0;
}