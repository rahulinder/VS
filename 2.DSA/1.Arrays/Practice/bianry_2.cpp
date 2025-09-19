#include<iostream>
using namespace std;

int main(){
    const int n = 10;
    int arr[n] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int num = 12;

    int l = 0;
    int r = n - 1;   
    int mid;
    int result = -1;

    while (l <= r) { // CORRECT: Braces added to contain the loop's logic
        mid = (l + r) / 2;

        if (arr[mid] == num) { // If the middle element is the number
            result = mid;      // Store the index
            break;             // Exit the loop since we found it
        }

        if (arr[mid] < num) { // If the middle element is smaller
            l = mid + 1;      // Search in the right half
        } else {              // If the middle element is larger
            r = mid - 1;      // Search in the left half
        }
    }

    if (result != -1) {
        cout << "Number " << num << " found at index: " << result << endl;
    } else {
        cout << "Number " << num << " not found in the array." << endl;
    }

    return 0;
}