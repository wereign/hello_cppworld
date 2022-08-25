#include <iostream>

using namespace std;

class Account{
    int number;
    double balance;
    public:
        Account(int x, double y){
            number = x;
            balance = y;
        }

        Account(int z){
            number = z;
            double balance = 0.0;
        }

        double crediting(double deposit){
            return (balance + deposit);
        }
};

int main(){
    double newbal;
    Account Ass1(003,20075.00);
    newbal = Ass1.crediting(1000);
    cout << "New Balance of Ass1: " << newbal << "\n";
    Account Ass2(999);
    newbal =  Ass2.crediting(500.00);
    cout << "New Balance of Ass2: " << newbal << "\n";
}