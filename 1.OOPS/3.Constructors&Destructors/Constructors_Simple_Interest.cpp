//dynamic initialization of objects using constructors
#include<iostream>
using namespace std;

class bank{
    int principle;
    int years;
    float interest;
    float return_amount;

    public:

    bank();/*non-parameterized constructor is required because in case of uninitialized
    object this constructor will run. */

    bank(int p, int y , float i);//takes input for interest in whole number representing % e.g. 5%
    bank(int p , int y, int i);//takes input for interest in decimals e.g. 0.05
    void display(){
        cout<<"Principle amount of "<<principle<<" over the period of "<<years<<" Years"
            <<" with "<<interest<<" has become "<<return_amount<<endl;
    }
};

bank::bank(){ cout<<"bank() called"<<endl<<endl;}

//takes input for interest in decimals e.g. 0.05
bank::bank(int p, int y , float i){
    principle = p;
    years = y;
    interest=i;
    return_amount = p*(1+i*y);
}

//takes input for interest in whole number representing % e.g. 5%
bank::bank(int p, int y , int i){
    principle = p;
    years = y;
    interest=i;
    return_amount = p*(1+(float(i)/100)*y);
}

int main(){

    int p,y,id;
    float ip;
    
    cout<<"Enter Principle amount:";
    cin>>p;
    cout<<"Enter time period in years:";
    cin>>y;
    cout<<"Enter Interest (%):";
    cin>>id;
    cout<<"Enter Interest (0.00):";
    cin>>ip;

    bank c1, c2, c3;

    c1=bank(p,y,ip);
    c1.display();

    c2=bank(p,y,id);
    c2.display();

return 0;
}