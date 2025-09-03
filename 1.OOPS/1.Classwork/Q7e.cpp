#include<iostream>
using namespace std;

int main() {

    int n=5;

    int matrix[5][5]={0};

    for(int i=0;i<n;i++){
        for(int j=0 ;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}