/* Use of function */

#include <iostream>

using namespace std;

int main(){

    int x, y;
    int result;
    int gcd(int, int);
    cout << "Enter two positive numbers: " ;
    cin >> x >> y;
    result = gcd(x,y);
    cout << "GCD of "<< x << ' ' << y << " = " << result << '\n';
}

int gcd (int m , int n){
    if ( n == 0) return m;

    else
        return gcd(n, m % n);
}