#include<iostream>
#include<string>
using namespace std;

class employee{
    int e_id[20]={0};
    int e_salary[20]={0};
    string e_name[20]={"Empty"};

    public:
    void details(int n);
    void r_display(int n);
};

void employee::details(int n){
    if(n>20){
        cout<<"Max Employees 20";
    }

    for(int i=0;i<n;i++){
        cout<<"Enter the employee's name #"<<i+1<<" : ";
        getline(cin,e_name[i]);
       
        cin.ignore();
        
        cout<<"Assign "<<e_name[i]<<" an ID :";
        cin>>e_id[i];
        
        cout<<"Enter salary details of "<<e_name[i]<<" per month";
        cin>>e_salary[i];
       
    }
}

void employee::r_display(int n){
    cout<<"Employee Records\n";
    cout<<"Total employees are "<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<e_name[i]<<" has ID "<<e_id[i]<<" and salary "<<e_salary[i]<<"/month."<<endl;
        }
}


int main(){

    int n;

    cout<<"\n\nEnter total number of employees : ";
    cin>>n;
    cout<<endl;

    employee details;

    details.details(n);
    details.r_display(n);

    return 0;
}
