/*definition--->constructor is a special fun which is called automatically where object is created
the name of constuctor and name of class is same in constuctor
constructor does not use any return type even void
constructor does not use special keyword like static and inline
constructor always declare in a public part of a class and define either inside and outside of calss

prototype of constructor ------> [<class-name>(list parameter);]
syntax of constructor ---->   [<class-name>(list of parameter){---------}
syntax of define outside of class----> [<class-name>::<class-name>(list of parameter){----------}]   */

// constructor can be two types----> default constuctor , parameterized constuctor.
//  default constructor---> which has no argument
//  parameterized constuctor ----> which has parameter !

/*default constructor example
#include <iostream>
using namespace std;
class employee
{
public:
    employee()
    {
        cout << "default constuctor" << endl;
    }
};
int main(void)
{
    employee e1;
    employee e2;// creating an object of employee..
    return 0;
}*/

/*parameterized constructor example */
#include<iostream>
using namespace std;

class employee{
    public:
    int id; //data member
    string name; //data member
    float salary; //data member 

 employee(int i,string n,float s)
{
    id = i;
    name = n;
    salary = s;
}
   void display()
   {
    cout<<id<<" "<<name <<" "<<salary<<endl;
   }
};
int main(void)
{
    employee e1 (101,"tina siya",4000);
    employee e2 (102 ,"rina",3000);
     e1.display();
     e2.display();
     return 0;
}