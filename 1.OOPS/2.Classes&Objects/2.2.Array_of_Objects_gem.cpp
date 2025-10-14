#include<iostream>
#include<string>

using namespace std;

class employee{
    int e_id[20];
    int e_salary[20];
    string e_name[20];

    public:
    void getDetails(int n);
    void display(int n);
};

void employee::getDetails(int n) {
    if (n > 20) {
        cout << "Error: Cannot store more than 20 employees." << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter Details for Employee #" << i + 1 << " ---" << endl;

        cout << "Enter employee ID: ";
        cin >> e_id[i];

        cin.ignore();

        cout << "Enter employee's name: ";
        getline(cin, e_name[i]);

        cout << "Enter salary for " << e_name[i] << ": ";
        cin >> e_salary[i];
    }
}

void employee::display(int n) {
    cout << "\n--- All Employee Details ---" << endl;
    cout << "Showing records for " << n << " employees:" << endl;
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". Name: " << e_name[i]
             << " | ID: " << e_id[i]
             << " | Salary: " << e_salary[i] << "/month." << endl;
    }
}

int main(){
    int n;
    cout << "Enter total number of employees: ";
    cin >> n;

    employee details;

    details.getDetails(n);
    details.display(n);

    return 0;
}