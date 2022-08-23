#include <iostream>

using namespace std;

int main(){
    enum weekDay {Sunday, Monday, Tuesday, Wednesday};

    cout << int(Tuesday) + int(Wednesday) << '\n';
    weekDay Thursday = (weekDay) 10;
    cout << (int(Sunday) + int(Thursday))<< '\n';

    enum grade {A = 100, B = 80, C = 70};   
    int var1 = A;
    int var2 = Monday;
    cout << var1 + var2 << '\n';

}