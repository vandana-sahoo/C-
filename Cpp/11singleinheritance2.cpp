#include<iostream>
using namespace std;

  //base class for single inheritamce
class base 
{
public :
int x ;
void getdata()
{
cout << "enter the value of x = "<<endl;
cin >> x;
}
};
class derive : public base
{
    private :
    int y;
    public :
    void readdata()
    {
        cout << "enter the value of y = ";
        cin >> y;
    }
    void product()
    {
        cout << "product = "<< x * y;
    }
};
    int main ()
    {
        derive obj;
        obj.getdata();
        obj.readdata();
        obj.product();
        return 0;
    }