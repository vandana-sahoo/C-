/*                         ----------inline function-------
------->the func of c++ which is declare using inline keyword is called inline function.
------->inline function is (stored in regiester memory near to  processor) thats why 
         execute fastly comapre to other function of c++. 
------->Every member func of calss which is define inside of class is automatically becomes inline function.*/

//program for inline function............

#include<iostream>
using namespace std;

class Idemo
{
    public:
    int x;
   inline void set(int a)
    {x = a;}
    void show();
};
void Idemo :: show ()
{
cout<<"the value of x = "<<x<<endl;
}
int main()
{
    Idemo p;
    p.set(10);
    p.show();
    cout<<"done"<<endl;
    return 0;
}