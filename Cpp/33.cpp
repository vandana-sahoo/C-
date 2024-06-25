//----------------POINTER TO DERIVE CLASS-----------------------
// a base class pointer which pointed derived class object is called pointer to derive class....
//(NOTE)----->pointer to dervied class can access only overridden functions from base class to derived class ..
//                      (pointer)           (oject)                      (result)
//                     base class           base class                 base calss member ko acess karega
//                 base class pointer     derived class object         base class member ko access karega
//               derived class pointer    derived class object         base and derived both are accessible.
//************************************************PROGRAM********************************************

#include <iostream>
using namespace std;

class bca
{
    public:
        int a;
    void show1()
    {
        cout<<"a = "<<a<<endl;
    }
};
class dca : public bca 
{
public:
int b;
void show()
{
    cout<<"b = "<<b<<endl;
}
 void func1()
 {
    cout<<"function 1 is called"<<endl;
 }
};

int main()
{
   bca p, *bptr;
    p.a = 10;
    dca q ;
    q.a = 20;
    bptr = &p; 
    bptr -> show1();  //10
    bptr = show();  //a =10 not a= 20  

    // bptr.func1();  invalid 
// to print a = 20 (dc*(bptr))->show();   =20

/*dca p,  *bptr;
bptr = &p;
bptr ->a=10;
bptr ->b=20;
bptr ->func1();   
bptr ->show1();
bptr ->show();*/

return 0;
}