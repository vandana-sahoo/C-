//single inheritance program:
#include<iostream>
using namespace std;

//base class
class vandana  
{
public:
vandana()
{
    cout <<"single inheritence"<< endl;
}
};

//sub clss derived from a single base class
class sahu : public vandana
{
public:
void showdata()
{ 
    cout<<"my name is : vandana sahu"<<endl;
}
};

//main function
int main()
{
//declare object of base class 
sahu obj;
obj.showdata();

    return 0;
}