#include<iostream>
// #include<conio.h>
using namespace std;

class animal
{
public:
 char name[10];
 char sound[10];
 char colour[10];
 float weight;

void getdata()
{
cout<<"enter the cat name,sound,colour,weight"<<endl;
 cin>>name>>sound>>colour>>weight;
// cout<<"enter the dog name"<<endl;
// cin>>name;

}
void showdata();
};

void animal :: showdata()   //using of scope resulution operator
{
    cout<<""<<name<<"\t"<<sound<<"\t"<<colour<<"\t"<<weight<<endl;
}
int main()
{
    animal p,q;
    p.getdata();
    q.getdata();
    cout<<"my pet details are:"<<endl;
    p.showdata();
    q.showdata();
    cout<<"nice naaa"<<endl;
    return 0;      // getch();
}

