#include <iostream>

using namespace std;

class Account{
    public:
        int number;
        double balance;
};

class SubClass: public Account{
    public:
        double crediting(double deposit){
            return balance + deposit;
        }
};


int main(){
    double newbal;
    SubClass Test1;
    Test1.number = 500;
    Test1.balance = 200;
    newbal = Test1.crediting(10000);
    cout << "Account number = "<<Test1.number << "\n";
    cout << "Old Balance = " << Test1.balance << "\n";
    cout << "New Balance = " << newbal << "\n";
}
