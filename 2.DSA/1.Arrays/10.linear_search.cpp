#include<iostream>
using namespace std;

int main(){
    const int n = 10;
    int arr[n]={2,4,6,8,10,12,14,16,18,20};
    int s ;
    cout<<"enter s : "; 
    cin>>s;
    
    int h;
    h=n/2;

    for(int i=h;i<=n;i++){
        if(arr[i]==s){
            cout<<"element "<<s<<" found at "<<i<<" position.";
            break;
        }
    }

    for(int j=0;j<=h;j++){
            if (arr[j]==s){
            cout<<"element "<<s<<" found at "<<j<<" position ";
            break;
        }
    }

return 0;
}