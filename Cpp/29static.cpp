/*                             ---static member of calss---
the member of class which is declare with static keyword is called static member of calss.
                               ---they are two types----   
                        1.(static member data)   2.(static member function)

-------------------------------------------------------------------------------------------------------------
class staticdemo
{ public : 
static int a; //static member data
       int b; //non-static member data
static void fun1();//static member data
       void fun2();//non-static member function
};
------------------------------------------------------------------------------------------------------------
# the space for static member of class is created in the seperate location of (RAM).
# outside of object called (static)context of class. 
# the space for static member of class is created only one times where non static mem of class
    created many time for diffrent - diffrent object.
# staic member func can access static member data but not access non-static member data directly.
# non-static member fun access both static and non-static member data because non-static
 member of class is (instance class).
------------------------------------------------------------------------------------------------------------*/
// program for static member of calss!
