/*
                        Public Derived      Private Derived     Protected Derived

-Private Members        Not Inheritable     Not Inheritable     Not Inheritable
-Protected Members      Protected           Private             Protected
-Public Members         Public              Private             Protected     

Protected

Any protected member of base class can be inherited, it behaves like private member
but can be inherited by derived class. 
*/

#include<iostream>
using namespace std;

class base{
    private:      int a = 10;

    protected:    int b = 20;

    public:       int c = 30;

};

// class derived : private base{
// class derived : private base{
class derived : protected base{//inheriting both protected and public members in a protected socope
    public: 
    void display(){
        // cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

int main(){
    derived d1;
    // d1.b;
    // d1.c; both cannot be accessed as they are in the protected scope of derived class
    d1.display();// but can be accesed by a public member function of the derived class

return 0;
}