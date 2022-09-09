#include <iostream>

using namespace std;

class Book{
    protected:
        int number;
        double price;
    public:
        Book(int a, double d){
            number = a;
            price = d;

        }
};

class SubClass :public Book{
    int number;
    public:
        SubClass(int p, double q, int r): Book(p,q){
            number = r;
        }
        void display(){
            cout <<"Number = " << Book::number << "\t";
            cout << "Price = " << Book::price << "\t";
            cout << "Subclass Number = " << number << "\n";
        }
};

int main(){
    SubClass IsClass(12,32,43);
    IsClass.display();

}