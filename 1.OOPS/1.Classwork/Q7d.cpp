#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int matrix[n*((n+1)/2)] = {0};

    for (int i = 0; i < n*((n+1)/2); i++){
        cin >> matrix[i];
    }

    int k = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){{
                if (i == j || i<j){
                    cout <<matrix[k] <<"\t";
                    k++;
                }

                else
                    cout<<"0"<<"\t";
            }
        }
        cout << endl;
    }
}