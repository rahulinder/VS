#include<iostream>
using namespace std;

int main(){
    const int n =10;
    int arr[n]={20,4,16,8,12,10,14,6,18,2};
    int e;
    
    cout <<"Enter even elements from 2 to 20 : ";  
    cin >> e;
    
    int h;
    h = n/2;
    for(int i = h; i < n; i++){
        if(arr[i]==e){
            cout<<e<<" is at index "<<i;
            break;
        }
        else{
            for(int j = 0; j < h; j++){
                if(arr[j]==e){
                    cout<<e<<" is at index "<<j;
                    break;
                }
            }
        }
    }

return 0;
}