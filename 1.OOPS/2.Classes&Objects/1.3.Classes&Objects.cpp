#include<iostream>
using namespace std;

class test {
private:
    int a = 5, b = 10;

public:

    friend int sum(const test& obj); 
};

int sum(const test& obj) {
    int c;

    c = obj.a + obj.b;
    return c;
}

int main() {
    test my_object; 
    
    int result;
    result = sum(my_object); 


    cout << "The sum of a and b is: " << result << endl;

    return 0;
}