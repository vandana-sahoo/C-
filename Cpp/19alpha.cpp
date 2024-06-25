//check vowel or a consonent manually

#include <iostream>
using namespace std;

int main ()
{
    char c;
    bool  islowercasevowel, isUppercasevowel;

    cout << "enter an alphabet: ";
    cin >> c;

//evaluate to 1 (true) if c is a lowercase vowel
    islowercasevowel = (c == 'a' || c == 'e' || c =='i' || c == 'u');

//evaluate to 1 (true) if c is a uppercase vowel
    isUppercasevowel = (c == 'A' ||  c == 'E' || c == 'I' || c == 'O' || c == 'U');

//show error message if c is not an alphabet
if (!isalpha(c))
printf("error! non-alphabetic character:");

else if (islowercasevowel || isUppercasevowel)     //condition me kabhi bhii (;) nahi lgta hai
cout << c << " is a vowel";

else
cout << c <<" is a consonent";

return 0;
}