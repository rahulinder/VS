//destructors are use to clear the dynamically allocated memory
//they execute reverlsy to the creation of objects 
#include <iostream>
#include <windows.h>
using namespace std;

class number{
    public:
    number(){
        cout << "Constructor CALLED"<< endl;
    }

    ~number(){
        cout << "Destructor CALLED"<< endl;
    }
};

int main(){

    cout << "Entering main function" << endl;
    cout << "\nCreating object n1" << endl;

    number n1; //constructor called for 1st time 
    //destructor called for last time
    {
        cout << "\nEntering Destructor block" << endl;
        cout << "Creating objects n2 and n3" << endl;

        number n2, n3;//constructor called for 2nd time for n2 and 3rd time for n3
        //destructor called for 1st time for n3 and 2nd time for n2
        cout << "\nExiting Destructor block" << endl;
    }

    return 0;
}