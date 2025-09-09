#include <iostream>
using namespace std;

int main(){

    int matrix[5] = {0};
    for (int i = 0; i < 5; i++){
        cin >> matrix[i];
    }

    int k = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == j){
                cout << matrix[k] << "\t";
                k++;
            }
            else
                cout << "0" << "\t";
        }
        cout << endl;
    }
    return 0;
}