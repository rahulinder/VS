#include<iostream>
using namespace std;

class Student {
protected:
    int roll_no;
public:
    void set_rollno(int r) {
        roll_no = r;
    }

    int get_rollno() {
        return roll_no;
    }
};

class Exam : public Student {
protected:
    float chem;
    float phy;
    float math;
public:
    void set_marks(float c, float p, float m) {
        chem = c;
        phy = p;
        math = m;
    }
};

class Result : public Exam {
    // No calculation here
    float per;
public:
    void display() {
        // Calculate the percentage just before displaying
        per = (chem + phy + math) / 3.0;

        cout << "Roll No : " << get_rollno() << endl;
        cout << "Chemistry : " << chem << endl;
        cout << "Physics : " << phy << endl;
        cout << "Maths : " << math << endl;
        cout << "Percentage : " << per << "%" << endl;
    }
};

int main() {
    Result s1;
    s1.set_rollno(25);
    s1.set_marks(90, 80, 70);
    s1.display(); // Now this will show the correct percentage

    return 0;
}
