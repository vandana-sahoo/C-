// c++ program to impliment the ATM MANAGMENT SYSTEM.........
#include <iostream>
using namespace std;
class bank
{
    // private variable used inside class
private:
    string name;
    long long acc_no;
    char type[10];
    long long amount = 0;
    long long total = 0;
    // public variables
public:
    // function to set the person's data
    void setvalue()
    {
        cout<<"Enter name\n";
        cin.ignore();
        // to use space in string
        getline(cin, name);
        cout << "Enter Account no\n";
        cin >> acc_no;
        cout << "Enter account type\n";
        cin >> type;
        cout << "Enter the balance\n";
        cin >> total;
    }
    // function to display the required data
    void showdata()
    {
        cout << "name:" << name << endl;
        cout << "account no:" << acc_no << endl;
        cout << "account type:" << type << endl;
        cout << "balance:" << total << endl;
    }
    // function to deposite the amount in atm
    void deposite()
    {
        cout <<"\nEnter amount to be deposite \n";
        cin >> amount;
    }
    // function to show the balance amount
    void showbal()
    {
        total = total + amount;
        cout << "\nTotal balance is:" << total;
    }
    // function to withdraw the amount in atm
    void withdrawl()
    {
        int a, avilable_bal;
        cout << "enter amount to withdraw\n";
        cin >> a;
        avilable_bal = total-a;
        cout<<"avilable balance is:"<<avilable_bal;
    }
};
// drived class
int main()
{
// object of class
    bank b;
    int choice;
    // infinite while loop to choose
    // options everytime
    while (1)
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~\n\n";
        cout << "enter your choice\n";
        cout << "\t1 . enter name , amount"
             << "number , account type\n";
        cout << "\t2 . balance enquiry\n";
        cout << "\t3 . deposite money\n";
        cout << "\t4 . show total balance\n";
        cout << "\t5 . withdraw money\n";
        cout << "\t6 . cancel\n";
        cin >> choice;
        // choice to select from
        switch (choice)
        {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposite();
            break;
        case 4:
            b.showbal();
            break;
        case 5:
            b.withdrawl();
            break;
        case 6:
            exit(1);
            break;
        default:
            cout << "\nInvalid choice\n";
        }
    }
}