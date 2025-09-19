#include<iostream>
using namespace std;

int main() {

    const int row=8;
    const int column=8;
    
    int matrix[row][column];
    int r,c,val;

    for(int i=0;i<8;i++) {
        cin>>r>>c>>val;
        matrix[r][c]=val;
    }

    cout<<"Filled values";

    for(int i=0;i<8;i++) {

        cout<<"Row "<<i<<": R="<<matrix[r]<<" C="<<matrix[c]<<" = "<<val<<endl;
    }

    return 0;
}