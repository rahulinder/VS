#include<iostream>
using namespace std;

int main(){
    const int n = 8;
    int matrix[n][n] = {0};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>matrix[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<matrix[i][j];
        }
    }

return 0;
}