#include <iostream>

using namespace std;

class Book {
    protected:
        int number;
        double price;
    public:
        Book(int a, double d){
            number = a;
            price = d;
        }

    void display(){
        cout << "Number = " << number << '\t';
        cout << "Price = " << price << '\n';
    }

};

class SubClass : public Book{
    int pages;
    public:
    SubClass (int p, double q, int r):Book(p,q){
        pages = r;
    }
};

int main(){
    SubClass Answer(1,240,405);
    Answer.display();
    Book cb = Answer;
    cb.display();
}