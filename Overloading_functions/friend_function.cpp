#include <iostream>

using namespace std;

class number
{
    int real;
    int imag;

public:
    number(){};
    number (int x, int y){
        real = x;
        imag = y;
    }

    void display(){
        cout << real << " + " << imag << "j \n";
    }

    void operator == (number);
};

void number::operator == (number num){
    if ((real==num.real) && (imag==num.imag))
        cout << "Numbers are equal \n";
    else
        cout << "Numbers are not equal \n";
}

int main(){
    number num1(5, 10);
    number num2(10, 5);
    num1 == num2;
    number num3 = num1;
    num1 == num3;
}