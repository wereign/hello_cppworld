#include <iostream>

using namespace std;

class Book{
    protected:
    int number;
    double price;
    protected:
        Book(int a, double b){
            number = a;
            price = b;
}
};

class SubClass: public Book{
    public:
        SubClass(int x, double y): Book (x, y){
            cout << "Can put things here too \n";
        }

        public:
        void display(){
            cout << "Number = " << number << "\t";
            cout << "Price = " << price << "\n";

        }
};

int main(){
    SubClass JavaSS(12,32);
    JavaSS.display();
}