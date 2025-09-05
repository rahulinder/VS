#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3};
    int n = 10;
    int temp = 1;

    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[temp - 1]) {
            arr[temp] = arr[i];
            temp++;
        }
    }

    cout << "final array ";
    for (int i = 0; i < temp; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
