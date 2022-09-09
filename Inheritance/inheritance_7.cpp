// Function Overrriding
#include <iostream>

using namespace std;

class Book
{
protected:
    int number;
    double price;

public:
    Book(int a, double d)
    {
        number = a;
        price = d;
    }

    void display()
    {
        cout << "Number = " << number << '\t';
        cout << "Price = " << price << '\n';
    }
};

class SubClass : public Book
{
    int pages;

public:
    SubClass(int p, int r, double q) : Book(p, q)
    {
        pages = r;
    }
    void display()
    {
        Book::display();
        cout << "Pages = " << pages << '\n';
    }
};

int main(){
    SubClass Thing(12,423,45454);
    Thing.display();
}