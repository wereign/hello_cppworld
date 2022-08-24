#include <iostream>

using namespace std;

int main(){
    bool arr[] = {true,false,false,false,false,false,false};
    for (int i = 0; i <  8 ;i++ ){
        cout << &arr[i] << "\t";
    }    
    cout << "\n";

}
