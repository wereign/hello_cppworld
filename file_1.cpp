#include <iostream>
#include <vector>
using namespace std;

    struct account {
        unsigned number;
        string name;
        int balance;
    };

int main(){

    vector<account> accounts(3);

    int i, num, deb;

    for (i=0;i<3;i++){
        cout << "For Person " << i << '\n';
        cout << "Enter account number: \n";
        cin >> accounts[i].number;
        cout << "Enter name: \n";
        cin >> accounts[i].name;
        cout << "Enter balance: \n";
        cin >> accounts[i].balance;

    }

    cout << "Enter the account number you want to withdraw from: \n";
    cin >> num;
    cout << "Enter the  amount you want to withdraw : \n";
    cin >> deb;

    for(i = 0; i < 3; i++){
        if (accounts[i].number == num)
            accounts[i].balance -= deb;
    }
    
    cout << "After transaction";
    for (i=0;i<3;i++){
        cout << "For Person " << i << '\n';
        cout << "Account number:" << accounts[i].number << '\n';
        cout << "Name: " << accounts[i].name << "\n";
        cout << "Balance: "<<  accounts[i].balance << '\n';

    }

}