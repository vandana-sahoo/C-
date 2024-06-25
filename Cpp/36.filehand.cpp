 #include<iostream>
 #include<fstream>

/* the useful classes for working with files in c++ are:                 
   1. fstreambase 
   2. ifstream ---> derived from fstreambase 
   3.ofstream ---> derived from fstrambase
*/

// In order work with files in c++ , you will have to open it . primarily ,there are 2 ways to open a file:
// 1. using the constuctor 
// 2. using the member function open() of the class

using namespace std;

int main(){   
    string st = "vandana";
    string st2;
// opning files using constructor and writing it 
// ofstream out ("sample37.txt"); //write operation 
// out << st;

// opening file using constructor and reading it
ifstream in("sample38.txt"); // read operation
in>>st2;
cout<<st2;
    return 0;
}














