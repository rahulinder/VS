#include<iostream>
using namespace std;

int main(){
    const int n = 10;
    int arr[n]={20,4,16,8,12,10,14,6,18,2};
    int temp = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] < temp){
            temp = arr[i];
        }
    }

    cout<<temp;
return 0;
}