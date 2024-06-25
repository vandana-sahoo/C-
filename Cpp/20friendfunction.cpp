/*-----friend function-----
-->it is normal func. which is declare as friend func. inside of class & define as normal fun in outside of class.
-->for declaration of frnd func we use frnd keyword.
-->friend fun is never be the member of class so, it is never call by object of class.
-->friend fuc call as normal without using object.
-->friend func can excess public & private mem of class by using object. (confused in this point)
-->freind fun define either public and private part of class. */

//program for friend func..........

#include <iostream>
using namespace std;

class mca
{
int a,b; //if we not define the access specifier type so by (default it is private)

public:
void setdata(int x ,int y)
{  a = x; b = y;  } 
 
void print();
friend void func1(mca);
};

void mca :: print()
{
cout<<"the value of a is:  "<< a <<endl;
cout<<"the value of b is:  "<< b <<endl;
}

void func1(mca p)  //friend func call private and public members by using self object.
{
p.a = 10;
p.b = 20;
p.print();
cout<<"this is private mem friend function"<<endl;
p.setdata(5,15);
p.print();
cout<<"this is public by using frnd func"<<endl;
}

int main()
{
    mca m,n;   //n is only for call the friend func1 if it is not here the main func never call the frnd fun.
    //m.a()
   // m.setdata(5,15);
   // m.print();
    func1(n); 
    cout<<"bye"<<endl;
    return 0;
}