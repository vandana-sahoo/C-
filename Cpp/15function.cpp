// function program on c++
// prototype of function -----> returntype function name (arguments)
//  arguments are two types actual and formal 

#include <iostream>
using namespace std;

int sum();
int sum(int a, int b)    // foramal arg
{
    int c = a + b;
    return c;
}
/*void g();
void g()
{
    cout << "hello" << endl;
}*/

int main()
{
    cout<<"the sum of 4 and 5 is "<<sum (4,5);
   /*int no1, no2;      // actual argument

    cout << "enter the no1";
    cin >> no1;
    cout << "enter the no2";
    cin >> no2;
    cout << "sum is = " << sum(no1, no2) << endl;
    g();*/

    return 0;
}
