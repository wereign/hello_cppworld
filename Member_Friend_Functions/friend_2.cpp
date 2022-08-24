#include <iostream>

using namespace std;

class BankAccount;
class Account
{
    int number;
    double balance;
    friend void check(Account, BankAccount);

public:
    Account(int x, double y)
    {
        number = x;
        balance = y;
    }
};

class BankAccount{
    int number;
    double balance;
    char type;
    friend void check(Account, BankAccount);
    public:
    BankAccount(int x, double y, char z){
        number = x;
        balance = y;
        type = z;
    }
};

void check(Account Ac1, BankAccount Bac1){
    if (Ac1.number == Bac1.number){
        cout << "Account number = " << Ac1.number<<'\n';
        cout << "Account Balance = " << Ac1.balance<<'\n';
    }
    else{
        cout << "Type of Account = "<< Bac1.type <<'\n';
    }
}

int main(){
    Account Acc1(101,1000);
    Account Acc2(102,1002);
    BankAccount BankAcc1(101,200,'s');
    check(Acc1,BankAcc1);
    check(Acc2, BankAcc1);

}