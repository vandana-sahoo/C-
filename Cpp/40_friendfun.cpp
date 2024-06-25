#include<iostream>
using namespace std;

class mca
{
    int a,b; //private data
    public:

    void set(int x,int y) //member fun
    {a = x; b = y;}

    void show(); 
friend void fun (mca); 

};

void mca::show()
{
    cout<<a<<" "<<b<<" "<<endl;
}

void fun (mca p)
{
    p.a = 10;
    p.b =5;
    p.show();
cout<<"this is freind function"<<endl;
}

int main()
{
    mca obj,obj2;
    obj.set(100,200);
    obj.show();

    fun (obj2);
    return 0;
}