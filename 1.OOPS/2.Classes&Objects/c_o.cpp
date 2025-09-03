#include <iostream>
using namespace std;

class employee
{
private:
    int a;
    int b;
    int c;

public:
    int d, e, f;

    void priv(int a1, int b1, int c1);
    void pub()
    {
        cout << "Value of a , b , c are (public fnctn): " << endl
             << a << endl
             << b << endl
             << c << endl;
        cout << "Value of d , e , f are :" << endl
             << d << endl
             << e << endl
             << f << endl;
    }
};

void employee::priv(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;

    cout << "Value of a , b , c are (private fnctn): " << endl
         << a << endl
         << b << endl
         << c << endl;
};

int main()
{
    employee rahul;
    rahul.d = 10;
    rahul.e = 20;
    rahul.f = 30;

    rahul.priv(100, 200, 300);
    rahul.pub();
    return 0;
}