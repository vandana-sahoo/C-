//inhreitnace program for hybrid ihr.
//it is bottom to top program.
#include<iostream>
// #include<conio.h>
using namespace std;

 class company//this is the base/super class 
{
public:
char comp_name[10];
/*void printdata2()
{cout<<"hiiii";}*/
};
class manager :virtual public company //this is the prototype for sub clas/derive class
{
public:
char man_name[10];
int man_salary;
void getmanager()
{
cout<<"enter company name:"<<endl;
cin>>comp_name;
cout<<"enter manager name and manager salary:"<<endl;
cin>>man_name>>man_salary;
}

void showmanager()
{
    cout<<"company name = "<<comp_name<<endl;
   cout<<"mananger name =  "<<endl<<man_name <<"manager salary =  "<<man_salary<<endl;
}
};//manager 
class assistant :virtual public company
{
public:
char assis_name[10];
int assis_no;
};
class project : public assistant ,public manager //don't forget to subclass ke upper squence vice leni hai
{
public:
int project_id;
char project_topic;
void getproject()
{
{
 cout<<"enter the assistant name and assistant number"<<endl;
 cin>>assis_name>>assis_no;
 cout<<"enter the project id and project topic"<<endl;
 cin>>project_id>>project_topic;
}
}
void showassistant()
{
cout<<"assistant_name = "<<assis_name<<endl;
cout<<"assistant_no.= "<<assis_no<<endl;
cout<<"project_id = "<<project_id<<endl;                                                                                                                                         
cout<<"project_topic = "<<project_topic<<endl;
cout<<"compony name = "<<comp_name<<endl;
}
};//project
int main()
{
project p;


    p.getmanager();
    p.getproject();
    p.showassistant();
    cout<<"assistant details are:"<<endl;
    p.showmanager();
return 0;// getch();
}
