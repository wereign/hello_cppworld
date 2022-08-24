#include <iostream>

using namespace std;

class Account{
    int number;
    string name;
    double balance;

    friend void display(Account Ac){
        cout << "Account Number: " << Ac.number << '\n';
        cout << "Account Name: "<<Ac.name << '\n';
        cout << "Account Balance: " << Ac.balance << '\n';
    }
    public:
        Account(int x, string s, double y){
            number = x;
            name = s;
            balance = y;}
};

int main(){
    Account Dok(001, "DOK",100);
    display(Dok);

}