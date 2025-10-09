#include<iostream>
using namespace std;

int main(){
    const int n = 10;
    int arr[n]  = {55,33,77,22,99,66,55,44,88,11};
    
    cout << "Unsorted" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }

    for (int i = 0; i < n - 1; i++) {
        int e = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[e]) {
                e = j;
            }
        }
        swap(arr[i], arr[e]);
    }

    cout << "\n\nSorted" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    
    return 0;
}