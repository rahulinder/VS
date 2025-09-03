//not correct 
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void check();
    void swap();
};

void binary::read()
{
    cout << "Enter a binary : ";
    cin >> s;
}

void binary::check()
{
    bool bin=true;
    for (int i = 0; i < s.length() ; i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "Not a binary";
                bin= false;
                break;
            }
        }

    if(bin==true){
        cout<<s<<" is a binary.";
    }
}

void binary:: swap(){
    string temp;
    for(int i =0 ;i<s.length();i++){
        if (s.at(i)=='0'){
            s.at(i)='1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
    }
    cout<<s;
}

int main()
{
    binary b;
    b.read();
    b.check();
    b.swap();

    return 0;
}
