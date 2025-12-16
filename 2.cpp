#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector <int> v;
    for(int i = 0; i < 10; i++){
        cout<<"\nSize : "<<v.size();
        cout<<"\t\tCapacity : "<<v.capacity();
        v.push_back(i+1);
    }

    return 0;
}