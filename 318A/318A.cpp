#include <iostream>
using namespace std;

int main(){
    long long n, k;

    cin >> n >> k;

    if(k <= (n + 1) / 2){ // odd numbers
        cout << (2 * k) - 1 << endl;
    }
    else{ // even numbers
        cout << (2 * (k - (n - (n / 2)))) << endl; // built up my own formula is insane work
    }
}