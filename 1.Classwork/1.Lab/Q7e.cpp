#include<iostream>
using namespace std;

int main() {
    int n=6;
    int matrix[6][6]={0};
    int v;
    int row = 0;
    int col = 0;

    for(int i=0;i<n;i++){
            cin>>row>>col>>v;
            matrix[row][col]=v;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}