#include <iostream>

using namespace std;


int object_count;

class Account{
    int number;
    double balance;
    public:
    Account(){
        number = 0;
        balance = 0;
        object_count ++;
        cout << "First constructor ";
        cout << object_count << " created\n";
    }
    Account(int x){
        number = x;
        balance = 0;
        object_count ++;
        cout << "Second constructor ";
        cout << object_count << " created\n";
    }

    Account(int x, double y){
        number = x;
        balance = y;
        object_count ++;
        cout << "Third constructor ";
        cout << object_count << " created\n";
    }

    // Destructor
    ~Account(){
        cout << "From Destructor ";
        cout << object_count -- << "Objects Destroyed \n";
    }

};

int main(){
    Account Acc1(001);
    Account Acc2;
    Account Acc3(100,200);
    
}
