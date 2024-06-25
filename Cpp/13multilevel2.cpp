#include <iostream>
using namespace std;

class personal
{
public:
    char personal[50];
    void printdata1()
    {
        cout << " enter the name,mothername,fathername,brothersname:" << endl;
        cin >> personal;
    }

};
class collage : public personal
{
public:
    char collage[50];
    void printdata2()
    {
        cout << "enter collagename,coursename,subjects: " << endl;
        cin >> collage;
    }
};
class relationship : public collage
{
   /* private:
   char relationship[50];
void showdata();*/
public:
    char relationship[50];
    void printdata3()
    {
        cout << "enter fav one's name: " << endl;
        cin >> relationship;
    }

/*void showdata()
{
    cout<<"informations are:";
    cin>>relationship;
}*/
};

int main()
{
    relationship a;
    a.printdata1();
    a.printdata2();
    a.printdata3();
  //  a.showdata();
    return 0;
}