#include <iostream>
#include <string.h>
using namespace std;

class student
{
public:
int rollno;
string name;
float percent;

void getdata()
{
    cout<<"enter the rn,n,p";
    cin>>rollno>>name>>percent;

}
void showdata();    
};

void student :: showdata ()
{
    cout<<"student details are--------------"<<endl;
    cout<<rollno<<"\t"<<name<<"\t"<<percent;
    
}
int main()
{
    student obj;
    obj.getdata();
    obj.showdata();
    return 0;
}