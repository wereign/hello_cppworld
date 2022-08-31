#include <iostream>
#include <string.h>

using namespace std;

class String{
    char st[100];
    public:
    String(){strcpy(st, " ");};
    String (char string1[]){
        strcpy(st, string1);
    }

    void display(){
        cout << st << "\n";
    }

    String operator + (String);

};

String String::operator+ (String string2){
    String temp;
    strcpy(temp.st, st);
    strcat(temp.st, string2.st);
    return (temp);
}

int main(){
    String string2("This sentence ");
    String string3 ("is the result of concatenation \n");
    String s = string2 + string3;
    s.display();
}