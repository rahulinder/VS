#include<iostream>
using namespace std;

int main(){
    const int n = 10;
    int arr[n] = {4,8,12,16,20,24,28,32,36,40};
    int s;
    cout<<"Enter num from table of 4 : "; 
    cin>>s;
    
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            cout<<"Enlement "<<s<<" found at position "<<i+1 <<" of array.";
        }
    }
return 0;
}