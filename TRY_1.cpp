#include <iostream>
#include <string>

using namespace std;

// The class no longer includes a vector.
class PlayerProfile {
private:
    string username;

public:
    // The constructor now only needs the player's name.
    PlayerProfile(const string& name) {
        username = name;
    }

    // The display function is updated to only show the username.
    void display() const {
        cout << "--- Player Profile ---\n";
        cout << "Username: " << username << "\n";
    }
};

void printProfile(const PlayerProfile& profile) {
    profile.display();
}

int main() {
    // We now create the object by only providing a name.
    PlayerProfile player1("Gemini");

    printProfile(player1);

    return 0;
}