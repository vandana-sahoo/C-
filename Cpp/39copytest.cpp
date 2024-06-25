/*copy constuctor has two typs---->default copy constuctor , parameterized copy constuctor
copy constuctor is used to overloaded and initilize an object to another object 
default copy constuctor --> the compiler define the default copy constuctor, if the user define copy constructor 
compiler supplies the constructor 
user define copy constructor ---> which is define by user*/

//syntax of user define copy constructor --> class_name(constructor class_name & old_name)


 #include <iostream>
 using namespace std;
class student
{
public:
int x; 
student (int a) //parameterised con
    {x = a;} 

student (student & i) //copy constructor
    {x = i.x;} 
};
int main()
{
    student a1(20);
    student a2(a1);
    cout<<a2.x;
    return 0;
}


// class emp
// {
//     public:
//     int x;
//     emp(int a)
//     {x = a;}
//     emp(emp & i)
//     {x = i.x;}

// int main()
// {
//     emp a1(10);
//     emp a2(a1);
//     cout<<a2.x;
//     return 0;
// }

// };