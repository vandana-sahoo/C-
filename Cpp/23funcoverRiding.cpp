#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void show()
    {
        cout << "a = " <<a<<endl;
        cout << "show of super class" << endl;
    }
};
class B : public A
{
    int b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "show of sub class" << endl;
    }
};
int main()
{
    B p;
    p.set(10, 20);
    p.A :: show();
    p.show();
    cout << "done"<<endl;
    return 0;
}
