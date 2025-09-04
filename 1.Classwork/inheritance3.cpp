/*define a class area having two data variables l and b in private scope define a member function
input to enter the values of l and b. define a function a having integer return type to calculate the
area, define a class volume having data variable h in private scope, define a member function 'init'
to input the value of h, define a member function v to compute and print the volume.
class value is inheriting properties form class area.
*/
#include <iostream>
using namespace std;

class area
{
protected:
    int l, b;

public:
    area(int x, int y)
    {
        l = x;
        b = y;
    }
    // area(){
    //     cout<<"\nBase class constructor";
    //     cout<<"\nEnter the values of l and b : ";
    //     cin>>l>>b;
    // }
    ~area()
    {
        cout << "\nBase destructor ";
    }
    // void input(){
    //     cout<<"Enter the values of l and b : ";
    //     cin>>l>>b;
    // }

    int a()
    {
        return l * b;
    }
};

class volume : public area
{
    int h;

public:
    // volume():area(5,6){
    volume(int m, int n, int o) : area(m, n)
    {
        // cout<<"\nDerived class constructor";
        // cout<<"\nEnter h : ";
        // cin>>h;
        h = o;
    }
    ~volume()
    {
        cout << "\nDerived destructor ";
    }
    // void init(){
    //     cout<<"Enter h : ";
    //     cin>>h;
    // }

    void v()
    {
        cout << h * a(); // cout<<l*b*h;
    }
};

int main()
{
    volume ob(5, 6, 9); // constructor for class area will be called first becuse class volume is inheriting properties form class area
    // volume ob(2,5);//error
    //
    //  ob.input();
    //  ob.init();
    ob.v();

    return 0;
}