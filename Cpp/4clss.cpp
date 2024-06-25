#include<iostream>
// #include<conio.h>
using namespace std;
class student
{
public: // mentioning is important because by default class programs are private 
int rn;
float p;
char n[10];
void getdata()
{
    cout<<"enter the rollno ,name, per"<<endl;
    cin>>rn>>n>>p; 
}
void showdata();
};
void student :: showdata ()
{
    cout<<"roll no = "<<rn<<endl;
    cout<<"name = "<<n<<endl;
    cout<<"percent = "<<p<<endl;
}
int main()
{
    student p,q;
    p.getdata();
    q.getdata();
    cout<<"student details are:"<<endl;
    p.showdata();
    q.showdata();
    cout<<"have a nice day";
    return 0;// getch();
}