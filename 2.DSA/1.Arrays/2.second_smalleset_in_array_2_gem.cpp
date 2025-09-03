#include <iostream>
#include <climits> // Required for INT_MAX
using namespace std;

int main() {
    const int n = 5;
    int arr[n] = {4, 1, 5, 2, 3};

    int smallest = INT_MAX;
    int ssmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            ssmallest = smallest; // The old smallest is now the second smallest
            smallest = arr[i];    // We have a new smallest
        } 
        else if (arr[i] < ssmallest && arr[i] != smallest) {
            ssmallest = arr[i]; // We have a new second smallest
        }
    }

    cout << smallest << " is the smallest number" << endl;
    cout << ssmallest << " is the 2nd smallest number" << endl;

    return 0;
}