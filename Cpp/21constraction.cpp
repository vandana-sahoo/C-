// consturction is a special member fun which is called automatically where object is created.
// the name of constuction and name of class are same.
// construction doesn't use any return type (even void).
// constructor always declared in (public) part of class and (define) either inside or outside of class.
// constuctor doesn't called expilicity it is automatically called when object is created.

// constructor has 3 types ----> *default         *parameterised          *copy constructor

// program for parameterised and default constructor..

#include <iostream>
using namespace std;

class mca
{
    int a, b;

public:
    mca() // this is constructor
    {
        cout << "this is default constructor" << endl; //without parameter
        a = 0;
        b = 0;
    }

    mca(int x, int y)
    {
        a = x;
        b = y;
        cout << "this is parameterised" << endl; //with parameter
    }
    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int main()
{
    mca p;
    p.show();
    mca q(10, 5);
    q.show();
    cout << "nice";
    return 0;
}
