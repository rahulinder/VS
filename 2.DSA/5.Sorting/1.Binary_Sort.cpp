#include<iostream>
using namespace std;

int bsearch(int arr[], int n, int f){
    int low = 0;// index of first element
    int high = n-1;// index of last element
    int mid;

    while(low <= high){
        mid = low + (high-low)/2; //finding the middle element
        cout<<"low = "<<low<<"\nhigh = "<<high<<"\nmid = "<<mid<<endl;

        if(arr[mid] == f){
            return mid;
        }
        else if(arr[mid] < f){
            low = mid +1;
            cout<<"low = mid + 1; = "<<low<<endl;
        }
        else{
            high = mid-1;
            cout<<"high = mid - 1; = "<<high<<endl;
        }
        cout<<endl;
    }
    return -1;
}

int main(){
    const int n = 10;
    int arr[n] = {3, 7, 10, 14, 17, 21, 24, 28, 31, 35};
    int f = 10;

    // cout<<"f = ";cin>>f;

    cout<<bsearch(arr, n, f);
 

return 0;
}