// Multi Level Inheritance

#include <iostream>

using namespace std;

class Book{
    protected:
        int number;
        double price;
    public:
        Book(int a , double d){
            number = a;
            price = d;
        }
};


class SubClass :public Book{
    protected:
        int pages;
    public:
        SubClass(int p, double q, int r): Book(p,q){
            pages = r;
        }
};
class SubSubClass :public SubClass{
    protected:
        double discount;
    public:
        SubSubClass(int p, double q, int r, double s): SubClass(p,q,r){
            discount = s;
        }
    void display(){
        cout << "Number = " << number << "\t";
        cout << "Price = " << price << "\t";
        cout << "Pages = " << pages << "\t";
        cout << "Discount = " << discount << "\n";
    }
};

int main(){
    SubSubClass Test(1,12,32,434);
    Test.display();
}

