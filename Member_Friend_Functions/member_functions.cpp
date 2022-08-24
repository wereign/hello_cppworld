#include <iostream>

using namespace std;

class Account
{
    int number;
    string name;
    double balance;

public:
    inline void indata(int x, string s, double y)
    {
        number = x;
        name = s;
        balance = y;
    }
    void display();
};

void Account::display()
{
    cout << "Account number = " << number << "\n";
    cout << "Name = " << name << "\n";
    cout << "Balance =" << balance << "\n";
}

int main()
{
    Account Virenn;
    Virenn.indata(42, "Virenn", 2341312342);
    Virenn.display();
}