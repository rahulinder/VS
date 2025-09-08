#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a = {1, 0, 2, 3,0,0,4,5,1};
    int n = a.size();

    int j = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }
    
    for (int i = j + 1; i < n; ++i) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }

    for (int element : a) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}