#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5]={5,25,15,10,20};

    int smallest=arr[0];
    int ssmallest= INT_MAX;

    for(int i=1;i<5;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    cout<<smallest<<" is the smallest amongst all"<<endl;

    for(int i=1;i<5;i++){
        if(ssmallest>arr[i] && arr[i]!=smallest){ //at arr[i]=25, arr[i]!=smallest becomes false
            ssmallest=arr[i];
        }
    }
    cout<<smallest<<" is the second smallest amongst all"<<endl;

return 0;
}
