#include <iostream>
using namespace std;
class kainth
{
    int a;
    int b;

public:
    void set()
    {
        cin >> a >> b;
    }
    void get()
    {
        cout << a << "+i" << b;
    }
    void sum(kainth *o1, kainth *o2);
};
void kainth::sum(kainth *o1, kainth *o2)
{
    kainth o3;
    a = o1->a + o2->a;
    b = o1->b + o2->b;
    // return o3;
}
int main()
{
    kainth ob1, ob2, ob3;
    ob1.set();
    ob2.set();
    ob3.sum(&ob1, &ob2);
    ob3.get();
}