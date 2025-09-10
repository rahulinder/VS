#include <iostream>
using namespace std;

class SmartTV {
private:
    int volume;
    int modelID; 
    public:
    SmartTV(int id, int vol) : modelID(id), volume(vol) {}
    // A regular, non-const member function.
    // It is ALLOWED to change member variables.
    void increaseVolume() {
        volume++;
        cout << "Volume increased to " << volume << endl;
    }
    // This is a const member function, declared with 'const' at the end.
    // It PROMISES not to modify 'volume' or 'modelID'.
    void displayStatus() const {
        cout << "--- TV Status ---" << endl;
        cout << "Model ID: " << modelID << endl; // Displaying the integer ID
        // ---- VALID OPERATION: Reading data ----
        // This is perfectly fine, as it does not change any member variables.
        cout << "Current Volume: " << volume << endl;
        cout << "-----------------" << endl;
    }
};

int main() {
    SmartTV livingRoomTV(8500, 15);

    cout << "--- Testing a regular object ---" << endl;
    // We can call both const and non-const functions on it.
    livingRoomTV.displayStatus();
    livingRoomTV.increaseVolume();
    livingRoomTV.displayStatus();

    cout << "\n--- Testing a const object ---" << endl;
    // Now, create a constant object. Its state cannot be changed after creation.
    const SmartTV bedRoomTV(7700, 20);

    // Calling a const member function on a const object is ALLOWED.
    bedRoomTV.displayStatus();

    // Calling a non-const member function on a const object is FORBIDDEN.
    // bedRoomTV.increaseVolume(); // COMPILE ERROR: The object 'bedRoomTV' is const,
                                // and increaseVolume() is not a const function.

    return 0;
}
