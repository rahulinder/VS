#include<iostream>
using namespace std;

int main() {
    const int n = 10;
    int arr[n] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int s;
    bool found = false;
    int position = -1;

    cout << "Enter s: ";
    cin >> s;

    // Linear search for the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == s) {
            found = true;
            position = i;
            break; // Exit the loop once the element is found
        }
    }

    if (found) {
        cout << "Element " << s << " found at position " << position << "." << endl;
    } else {
        cout << "Element " << s << " not found in the array." << endl;
    }

    return 0;
}