//get func and put func

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    fstream obj; //object for call the file 
    obj.open("test2.txt",ios::out); //open the file and for write something we use out
   
    char s[80]; //char size 80(full)
    cout<<"Enter the information about you"<<endl; 
    cin>>s;

 int len = strlen(s); //lenght wise enter the char in s.
for( int i=0; i<len; i++)
{
obj.put(s[i]);
}

 obj.close(); //close the out stream
    return 0;
}