/*optimal method*/

#include <iostream>
#include <climits>
using namespace std;

int main(){
    const int n = 5;
    int arr[n] = {4, 1, 5, 2, 3};
    int smallest =INT_MAX;
    int ssmallest = INT_MAX; // assuming array contains all the non negative elements

    for (int i = 0; i < n; i++)
    {
        //arr[i] < smallest will get the smallest element in array
        if (arr[i] < smallest)
        {
            ssmallest = smallest; //when smallest element identified value of smallest will be initialized to ssmallest making it the secont smallest number;\ 
            smallest = arr[i];//as arr[i] is the smallest element, it will replace the previous value of smallest variable
        }
/*    arr[i]!=smallest ensures that the arr[i] is not smaller than the smallest element and
        arr[i]<ssmallest ensures that the arr[i] is not smaller than 2nd smallest element. 
        satisfiying these conditions gives out the 2nd smallest element as it is 
        neither smaller than the smallest element nor smaller than any other value of arr[i]
*/
        else if(arr[i]<ssmallest && arr[i]!=smallest ){
            ssmallest=arr[i];
        }
    }
    cout << smallest<< " is the smallest number" << endl;
    cout << ssmallest << " is the 2nd smallest number" << endl;

    return 0;
}