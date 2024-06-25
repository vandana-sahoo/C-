//   -----------------pointer to object (important)------------------
//  #it is a class type pointer which contain address of same type object......
//  #for accessing the member of class by pointer to object we can use (->) symbol
//  such as = ptr -> setfunc(10); ptr ->show();
 
#include <iostream>
using namespace std;

class mca
{
    int a;

public:
    mca(int x)
    {
        a = x;
    }
    void show();
};

void mca::show()
{
    cout << "a = " << a << endl;
}

int main()
{
   mca p(10);       //this is pointer object calling: classname and object
    mca *ptr;      
    ptr = &p;
    ptr->show();
   // p.show();         //this is normal object calling 
    cout << "complete";
    return 0;
}
