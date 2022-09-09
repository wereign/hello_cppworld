#include <iostream>

using namespace std;

class Book
{
protected:
    int number;
    double price;

protected:
    Book(int a, double b)
    {
        number = a;
        price = b;
    }
    void Test_function()
    {
        cout << "So objects of a derived class can access protected functions too"
             << "\n";
    }
};

class SubClass : public Book
{
private:
    int pages;

public:
    SubClass(int var1, double var2, int var3) : Book(var1, var2)
    {
        pages = var3;
    }

public:
    void display()
    {
        cout << "Number = " << number << "\t";
        cout << "Pages = " << pages << "\t";
        cout << "Price = " << price << "\n";
    }
};

int main()
{
    SubClass JavaSS(12, 32, 400);
    JavaSS.display();
}