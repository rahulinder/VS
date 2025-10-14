#include<iostream>
#include<string>
using namespace std;

class employee{
    int id;
    string name;

    public:
    
    void setname(){
        cout<<endl<<endl<<"Enter Name: ";
        getline(cin,name);
    }
    
    void setid(){
        cout<<"Enter ID: ";
        cin>>id;
        cout<<endl;
    }
    
    void display(){
        cout<<"Employee Name:"<<name<<" & ID: "<<id;
        cout<<endl;
    }
};

int main(){
    employee e1[3];
    for(int i=0;i<3;i++){
        e1 [i].setname();
        e1 [i].setid();
        e1 [i].display();

        cin.ignore();
    }

return 0;
}