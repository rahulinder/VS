#include<iostream>
using namespace std;

int main() {

    int row[8];
    int column[8];
    int value[8];

    for(int i = 0 ; i < 8 ; i++)  {
        cout<<"Enter the values for "<<i<<" row"; 
        cin>>row[i]>>column[i]>>value[i];
    }

    cout<<"Row Column Value";
    for(int i = 0 ; i < 8 ; i++) {

        cout<<row[i]<<" "<<column[i]<<" "<<value[i]<<endl;
    }

    return 0;
}