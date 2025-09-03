#include <iostream>
using namespace std;

int fibbo(int n){
    int r;

    if (n <= 1){
        return n;
    }

    else{
        r = fibbo(n - 2) + fibbo(n - 1);
        return r;
    }
}
int main(){
    int n;
    cin >> n;

    cout << fibbo(n);

    return 0;
}