#include<iostream>
using namespace std;

int main(){
    const int n = 10;
    int arr[n] = {2,4,6,8,10,12,14,16,18,20};
    int p = arr[0];
    int f = 16;

    for(int i = 0; i < n; i++){
        if(arr[i]==f){
            cout<<"16 is at position "<<i+1;
            break;
        }
    }

return 0;
}