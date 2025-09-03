#include<iostream>
using namespace std;

const int row = 8;
const int column = 8;
int matrix[row][column] = {0};

void transpose() {
    cout << endl << endl << "----------Transposed----------\n";
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << matrix[j][i] << "   ";
        }
        cout << endl;
    }
}

void addition() {
    cout << endl << endl << "----------Added----------\n";
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << matrix[i][j] + matrix[i][j] << "   ";
        }
        cout << endl;
    }
}

void multiply() {
    cout << endl << endl << "----------Multiplied----------\n";
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << matrix[j][i] << "   ";
        }
        cout << endl;
    }
}

int main() {
    int r, c, val;

    for (int i = 0; i < 8; i++) {
        cin >> r >> c >> val;
        if (r >= 0 && r < row && c >= 0 && c < column) {
            matrix[r][c] = val;
        }
    }

    cout << "----------Filled values----------\n";
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << matrix[i][j] << "   ";
        }
        cout << endl;
    }

    cout << "Choose option :\n1)Transpose\n2)Addition\n3)Multiplication\nEnter 1-3 :"; // Fixed: Added missing semicolon
    int opt;
    cin >> opt;

    switch (opt) { // Fixed: Changed variable from 'input' to 'opt'
        case 1:
            transpose();
            break;

        case 2:
            addition();
            break;

        case 3:
            multiply();
            break;

        default:
            cout << "----------Invalid Output----------";
            break; // Fixed: Removed parentheses from break;
    }

    return 0;
}