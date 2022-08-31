#include <iostream>

using namespace std;

class Number
{
    int real;
    int imag;

public:
    Number() {};
    Number(int x, int y)
    {
        real = x;
        imag = y;
    }

    Number (int x){
        real = x;
        imag = 0;
    }

    Number operator - (Number num)
    {
        int temp_real = real - num.real;
        int temp_imag = imag - num.imag;
        Number temp_num(temp_real,temp_imag);
        return temp_num;
    }

    void display(){
        cout << "Number is "<< real << " + " << imag << "j \n";
    }
    Number operator ++ ();
    Number operator + (Number num);

};

Number Number::operator++(){
    real++;
    imag++;

    // pointer for the object that called the member functions
    return *this;
}
Number Number::operator + (Number num){
    Number temp_num;
    temp_num.real = real + num.real;
    temp_num.imag = imag + num.imag;
    return (temp_num);
}



int main(){
    Number num(1,2);
    Number num2(4,5);
    
    Number difference = num2 - num;
    difference.display();
    
    ++num2;
    num2.display();

    Number sum;
    sum = num + num2;
    std::cout<<"The sum of n1 + n2 ";
    sum.display();
    sum = sum + Number(4);
    std::cout << "The sum of num1, num2 and num3 ";
    sum.display();



}
