#include <iostream>

using namespace std;

class Account{
    public:
        int number;
        double balance;
        public:
        double crediting(double deposit){
            return balance + deposit;
        }
};

class SubClass :public Account{

};


int main(){
    double newbal ;
    SubClass Test2;
    Test2.number = 003;
    Test2.balance = 2000;
    newbal = Test2.crediting(3000);
    cout << "Account number = "<<Test2.number << "\n";
    cout << "Old Balance = " << Test2.balance << "\n";
    cout << "New Balance = " << newbal << "\n";
}