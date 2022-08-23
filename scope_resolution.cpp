#include <iostream>

using namespace std;



class SavingsAccount{
    static int number;
    public:
        static void display(){
            cout << "Account number = " << number << '\n';
        }
    SavingsAccount(){
        number ++;
    }

};

int var = 10;
int SavingsAccount::number = 100;

int main(){
    int var = 5;
    cout << "Var will be 5: " <<  var << "\n";
    cout << "Var will be 10: " << ::var << "\n";

    //static members are not a part of the object of the class
    SavingsAccount Tony;
    // Tony.display();
    SavingsAccount::display();
    SavingsAccount Pepper;
    // Pepper.display();
    SavingsAccount::display();


}