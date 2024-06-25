/*********************************************Virtual Function***************************************************************************
----> member function of base class define with virtual keyword is called virtual fuction of class...
----> virtual function is used to achieve run time polymorphism into our program.
----> virtual function always overridding in derive class.
----> when we make any function and virtual fun then its allow to axcess diffrent functionallity of the same function using base class pointer
      it is called (dynamic binding and late binding)

---------------------------------------------------------PROGRAMME-------------------------------------------------------------------*/
#include <iostream>
using namespace std;

class base
{
public:
    virtual void show() // virtual keyword for showing virtual function
    {
        cout << "show() of base class" << endl;
    }
    void display() // non virtual func
    {
        cout << "display of base class" << endl;
    }
};

class derived : public base
{ // whenever we create derive class then use  prototype (deriveclassname scpoe resolution(:) visibility mode base class name)
public:
    void show() // overridden of base class func
    {
        cout << "show() of derive class" << endl;
    }
    void display()     //also overridden but not a vitual func
    {
        cout << "display of derived class" << endl; // also a overridden fun
    }
};

int main()
{
    base B, *Bp;      //we create pointer foe base clss always not deriverd.
    derived D;        // but create object for both.
    Bp = &B;         //assing the base address into the base class object. 
    Bp->show();      //the base class pointer call show() of base clss func.                            //base class call
    Bp->display();    //The base class pointer call display() of base clas func.                         //base class call
    Bp = &D;         // now the  base class pointer want to go with derived class address.                //their is dynamic binding 
    Bp->show();      // base calss pointer call derived class show() func.                  // baseshow() b'caus fun is ovreridden by base calss of virtual
    Bp->display();    // the base class pointer call derived calss display() func.   (display() of base calss b'coz their is no virtual func)
    return 0;
}