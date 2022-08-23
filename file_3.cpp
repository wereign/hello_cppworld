#include <iostream>

using namespace std;

class Account{

    private:
        string name;
        int number;
        double balance;

    public:

        Account (string a, int x, double y){
            number = x;
            balance = y;
            name = a;
        }
    
        void display(){
            cout << "Name: " << name << "\n";
            cout << "Account number: " << number << "\n";
            cout << "Balance number: " << balance << '\n'; 
            
        }

        double crediting(double num){
            balance += num;
            return balance;
        }
};

int main(){
    Account Virenn("Virenn",12,420000);
    Virenn.display();
    cout << "\nAfter crediting \n";
    cout << Virenn.crediting(100000) << '\n';
    
}