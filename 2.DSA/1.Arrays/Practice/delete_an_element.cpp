#include <iostream>

using namespace std;

int main() {
    int arr[50] = {10, 20, 30, 40, 50};
    int size = 5; 
    int pos;

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    pos = 3;

    for (int i = pos - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}