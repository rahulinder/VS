#include<iostream>
using namespace std;

class Account{
    public:
    virtual void withdraw(){
        cout<<"\nAccount Withdraw...";
    }
};

class Saving : public Account{
    public:
    void withdraw(){
        cout<<"\nSaving Withdraw...";
    }
};

class Checking : public Account{
    public:
    void withdraw(){
        cout<<"\nChecking Withdraw...";
    }
    
};

class Trust : public Account{
    public:
    void withdraw(){
        cout<<"\nTrust Withdraw...";
    }
    
};

int main(){
    Account* p1 = new Account();    
    Account* p2 = new Saving();    
    Account* p3 = new Checking();    
    Account* p4 = new Trust(); 
    
    p1->withdraw();
    p2->withdraw();
    p3->withdraw();
    p4->withdraw();
    cout<<endl;

    cout<<"\n\nDeleting p1, p2, p3, p4\n";
    delete(p1);
    delete(p2);
    delete(p3);
    delete(p4);


    /*
    Output without virtual void withdraw();

    Account Withdraw...
    Account Withdraw...
    Account Withdraw...
    Account Withdraw...

    -–—-–—-–—-–—-–—-–—-–—-–—-–—-–—-–—-–—-–—-–—-–—-–—
    Output with virtual void withdraw(); // in Account class

    Account Withdraw...
    Saving Withdraw...
    Checking Withdraw...
    Trust Withdraw...
    */

    return 0;
}