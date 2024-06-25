 /*distructor works opposite to constructor  
 it destruct the object of class 
 it can be define only once in a class like constructor 
 it is invoked automatically 
a destructor is define like constuctor it must have a same name as class 
it is prifixed with a tilde sign(~)*/

// c++ destuctor cannot have parameter and modifiers cannot be applied 


#include <iostream>
using namespace std;

class employee
{
public:
    ~employee()     //~ tilde symbol or sign
    {
        cout << "this is destuctor";
    }
   employee() //constuctor
    {
        cout<<"this is constuctor"<<endl;
     }

};

int main(void)
{
    employee e1; // creating object for distructor
    employee e2;
    return 0;
}
