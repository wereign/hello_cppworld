#include <iostream>

using namespace std;

class Meth01
{
public:
    void add(int a, int b, int c)
    {
        cout << "Sum = " << (a + b + c) << "\n";
    }

    void add(float a, float b)
    {
        cout << "Sum = " << (a + b) << "\n";
    }

    void add(float a, float b, float c, float d)
    {
        cout << "Sum = " << (a + b + c + d) << "\n";
    }
};

int main()
{
    Meth01 ADD;

    ADD.add(10, 20, 30);
    ADD.add(10.5f, 20.5f);
    ADD.add(10.5, 20.5, 25.0, 17.3);
}