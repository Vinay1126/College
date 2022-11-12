#include <iostream>
using namespace std;

class Account
{
protected:
    int num, bal;
    string name;

public:
    virtual void dispbal()
    {
        bal = 0;
    }
};

class Savings : public Account
{
    int minbal;

public:
    Savings()
    {
        minbal = 10000;
    }

    void inputDetails()
    {
        cout << "For Savings Account: \n";
        cout << "Enter customer name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> num;
        cout << "Enter account balance: ";
        cin >> bal;
    }

    void deposit()
    {
        int dep;
        cout << "Enter amount to be deposited: ";
        cin >> dep;
        bal += dep;
        cout << "Rupees " << dep << " deposited\n";
    }

    void withdraw()
    {
        int withdrawal;
        cout << "Enter amount to be withdrawn: ";
        cin >> withdrawal;
        if (bal - withdrawal >= minbal)
        {
            cout << "Rupees " << withdrawal << " withdrawn\n";
            bal -= withdrawal;
        }
        else
            cout << "Insufficient Balance\n";
    }
    void dispbal()
    {
        cout << "Name:- " << name << endl;
        cout << "Account No.:- " << num << endl;
        cout << "Current Balance:- " << bal << endl;
    }
};

class Current : public Account
{
    int overDueAmt;

public:
    Current()
    {
        overDueAmt = 1000;
    }

    void inputDetails()
    {
        cout << "For Current Account: \n";
        cout << "Enter customer name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> num;
        cout << "Enter account balance: ";
        cin >> bal;
    }
    void deposit()
    {
        int dep;
        cout << "Enter amount to be deposited: ";
        cin >> dep;
        bal += dep;
        cout << "Rupees " << dep << " deposited\n";
    }
    void withdraw()
    {
        int withdrawal;
        cout << "Enter amount to be withdrawn: ";
        cin >> withdrawal;
        if (bal - withdrawal >= overDueAmt)
        {
            cout << "Rupees " << withdrawal << " withdrawn\n";
            bal -= withdrawal;
        }
        else
            cout << "Insufficient Balance\n";
    }
    void dispbal()
    {
        cout << "Name:- " << name << endl;
        cout << "Account No.:- " << num << endl;
        cout << "Current Balance:- " << bal << endl;
    }
};

int main()
{
    Account *t;
    Savings acc1;
    Current acc2;
    t = &acc1;
    acc1.inputDetails();
    acc1.deposit();
    acc1.withdraw();
    t->dispbal();
    cout << '\n';
    t = &acc2;
    acc2.inputDetails();
    acc2.deposit();
    acc2.withdraw();
    t->dispbal();
    return 0;
}