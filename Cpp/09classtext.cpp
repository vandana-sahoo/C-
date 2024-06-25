#include<iostream>
using namespace std;

class mca
{
public :   //acsses specifiers 

    int rollno; //member data:
    string name;
    float percentage;
 
void setdata() //member function
{ 
    cout<<"enter the rollno,name,percent"<<endl; 
    cin>>rollno>>name>>percentage;
}
void showdata();
};
 
void mca ::showdata()  //local variables define in globally
{
cout<<rollno<<""<<endl;
cout<<name<<""<<endl; cout<<percentage<<""<<endl;
}

int main()
{
mca p,q; //class object
p.setdata();   //call the function
q.setdata();
cout<<"mca toppers details are: "<<endl;
p.showdata();
q.showdata();
cout<<"good job vandana"<<endl;
return 0;
}