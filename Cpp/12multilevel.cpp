//program for multilevel inheritance
#include<iostream>
using namespace std;

class A
{
public:
int a;
void printdataA()
{
    cout << "enter value of a: ";
    cin >> a;
}
};

class B : public A
{
public:
int b;
void printdataB()
{
cout <<"enter value of b:"<<endl;
cin >> b;
}
};

class C : public B
{
int c;
public :
void printdataC()
{
cout <<"enter the value of c: "<<endl;
cin>> c;
}
void sum(){
    int ans = a + b + c;
    cout<<"sum is : "<< ans;
}
};
int main()
{
C obj;
obj.printdataA();
obj.printdataB();
obj.printdataC();
obj.sum();
return 0;
}