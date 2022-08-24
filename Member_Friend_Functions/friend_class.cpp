#include <iostream>

using namespace std;

class First{
    int val;
    public:
    First(int var1){val=var1;}
    friend class Second;
};

class Second{
    public:
        void display(First obj){
            cout << "Value: "<< obj.val << "\n";
        }
};

int main(){
    First obj(1000);
    Second obj2;
    obj2.display(obj);
}
