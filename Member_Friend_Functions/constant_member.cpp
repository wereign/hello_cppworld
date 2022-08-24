#include <iostream>

using namespace std;

class Account
{
    int number;
    string name;
    double balance;

public:
    // This line declares that the function is a constant member function
    void display() const;

    // This line declares that the function doesn't modify it's arguments
    inline void indata(const int x, const string s, double y)
    {
        number = x;
        name = s;
        balance = y;
    }
};

void Account::display() const
{
    cout << "Account number = " << number << "\n";
    cout << "Name = " << name << "\n";
    cout << "Balance = " << balance << "\n";
}

int main()
{
    Account Fergie;
    Fergie.indata(20,"Fergie",40);
    Fergie.display();
    Account Mainn;
    Mainn.indata(20,"Mainn",40);
    Mainn.display();
}