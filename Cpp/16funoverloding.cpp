/* ----->whem we execute more then one functionality by(SAME NAME) func this teqnique is called func overloading
   ----->defining any function more then one time is called func overloading */
#include <stdio.h>
#include<iostream>
using namespace std;

void samename()
{
cout<<"nothing to calculate "<<endl;
}
void samename(int x)
{
cout<<"square of : "<< x << " is " << (x*x) << endl;
}
void samename (int a ,int b)
{
cout<<"addition of:  "<< a << " and " << b << " is " << (a+b) <<endl;
}
void samename(char ch)
{
printf("ASCII value of %c = %d\n",ch,ch); //ASCII value padhni haii
}
void fun3(float n)
{
    cout<<"pertol price is:  "<<n<<endl;
}
void funcname(double m)
{
    cout<<"my marks is: "<<m<<endl;
}

int main()
{
    cout<<"program of function overloading"<<endl;

    samename();
    samename(5);
    samename(5,10);
    samename('K');  //uppercase and lowercase of ASCII value id diffrent in capital K=75 & small k = 107
    fun3(40.5);
    funcname(99.7);

    cout<<"function overloding done "<<endl;

    return 0;
}

