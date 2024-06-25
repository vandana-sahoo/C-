// ---------------THIS POINTER-------------------
//  this pointer is a predefine pointer of c++.
//  which point current object under execution. 
//  (mtlb jo class recent me bani hoti hai jaise kiii base class ko nii sub class ko point karega)

//------------------PROGRAM FOR THIS POINTER----------------------

#include <iostream>
using namespace std;

class thisdemo
{
int a,b;
public:
void get(int a, int b)
{
this -> a = a;
this -> b = b;
}
void show()
{
cout<<"a = "<<a<<endl;
cout<<"b = "<<b<<endl;
}
};
int main()
{
    thisdemo p;
    p.get(30,60);
    p.show();
    return 0;
}