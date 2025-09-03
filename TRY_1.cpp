#include <iostream>
using namespace std;

class SmartInt {
public:
    int* data;

    SmartInt(int value) {
        data = new int;
        *data = value;
        cout << "Constructor called for value " << *data << ". (Memory allocated)\n"<<endl;
    }

    ~SmartInt() {
        cout << "Destructor called for value " << *data << ". (Memory freed!)\n"<<endl;
        delete data;
    }

    void printValue() {
        cout << "The value is: " << *data << "\n"<<endl;
    }
};

void manageSmartInt() {
    cout << "--- Entering manageSmartInt function ---\n"<<endl;
    SmartInt myInt(42);
    myInt.printValue();
    cout << "--- Exiting manageSmartInt function ---\n"<<endl;
}

int main() {
    manageSmartInt();
    cout << "--- Back in main, after function call. --- \n"<<endl;
    return 0;
}