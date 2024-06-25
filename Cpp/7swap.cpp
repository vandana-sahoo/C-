//program to swap two numbers

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    int c ;
    
    cout <<"before swapping "<< endl;
    cout <<"a = "<<a<< " ,b = "<<b<< endl;

    c = a;
    a = b;
    b = c;

    cout <<"\nafter swapping" <<endl;
    cout <<"a = "<<a<< " ,b = "<<b<< endl;

    return 0;
}