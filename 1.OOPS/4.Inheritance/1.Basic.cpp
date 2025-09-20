#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    int salary;
    employee(){}
    employee(int id1){
        id = id1;
        salary = 500;
    }
};
/*
class {derived class name} : {visiblity mode} {base class name}{
    //code
}

1. Default visiblity mode is private
2. Public visiblity mode: all the public members of base class will become
   PUBLIC members of derived class 
3. Private visiblity mode: all the public members of base class will become
   PRIVATE members of derived class
4. Private members of base class are inaccessible by derived class    
*/
class programmer : employee{//members of base class are in PRIVATE scope of derived class
// class programmer : public employee{ //members of base class are in PUBLIC scope of derived class
public:
    programmer(int id2){
        id = id2;
        salary = 100; 
        // accessing members won't get the value of base class members
        //they must be reinitiallized in derived class
    }
    int lang = 5;
    void getdata(){
        cout<<"ID of p1 = "<<id<<endl;
        cout<<"Salary of p2 = "<<salary<<endl;
    }
};

int main(){
    employee e1(1);
    cout<<"ID of e1 = "<<e1.id<<endl
        <<"Salary of e1 = "<<e1.salary<<endl<<endl;

    programmer p1(2);
    // cout<<p1.id<<endl; //wont be accessible because by default visiblity mode is private
    p1.getdata();
    cout<<"Language of p1 = "<<p1.lang<<endl;

return 0;
}