#include <iostream>

using namespace std;

class number{
    int real;
    int imag;
    public:
    number(){};
    number (int x, int y){
        real = x;
        imag = y;
    }

    void display(){
        cout << real << " + " << imag << "j\n";
    }

    void operator -= (number);
};

void number::operator -= (number num){
    real -= num.real;
    imag -= num.imag;
}

int main(){
    number num1(15, 27);
    number num2(5, 7);
    num1 -= num2;
    num1.display();
}
