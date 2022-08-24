#include <iostream>

using namespace std;

const int Size = 5;
char Array[] = {'u','o','i','e','a'};

int main(){
    int left = 0, right = Size -1;
    void rqsort(int, int);
    rqsort(left, right);
    cout << "Sorted Array is:\n";
    for (left = 0; left <= right; left++){
        cout << Array[left] << ' ';
    }
    cout << '\n';
}

void rqsort(int l, int r){
    int x, temp, i, j;
    i = l; j = r;
    x = Array[(l+r)/2];
    do {
        while (Array[i] < x) i ++;
            while (Array[j] > x) j--;

            if (i <= j){
                temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
                i ++; j--;
            }
    } while (i <= j);

    if (l<j) rqsort(l, j);
    else 
        if (i < r) rqsort(i, r);
}