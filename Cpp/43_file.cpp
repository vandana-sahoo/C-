//program for get() and put()
#include<iostream>
#include<fstream>
#include <string.h>
using namespace std;

int main()
{
    fstream fn;  //object of fstream
    fn.open("filet.txt",ios::out);
    char s[80];
    cout <<"Enter Information"<<endl;
    cin>>s;
    int len = strlen (s); //find length of string
for (int i = 0; i<len; i++)
{
    fn.put(s[i]);
}
fn.close(); //closing the write mode [objname.close();]
// return 0;
// }
/*fn.open("filet.txt",ios::in);            
cout<<"info of file\n";
char ch;
fn.seekg(0);
while (fn.eof()==0)  //jb tk char 0 ni ho jata!!
{
    fn.get(ch);
    cout<<ch;
}*/
return 0;
}

