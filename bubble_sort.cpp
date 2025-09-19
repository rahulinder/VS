#include<iostream>
using namespace std;

int main(){
    const int n = 10;
    int a[n]={20,4,16,8,12,10,14,6,18,2};
    int temp = a[0];

    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            if(a[i]>a[i+1]){
            temp = a[i+1];
            a[i+1] = a[i];
            a[i] = temp;
            }
        }
        
    }

    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
return 0;
}