#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long cost(int x){
    if(x == 0){
        return 3;
    }
    else{
        long long p = 1;

        for(int i = 0; i < x; i++){
            p *= 3;
        }

        return p * 3 + x * (p / 3);
    }
}

long long power3(int x){
    long long p = 1;

    for(int i = 0; i < x; i++){
        p *= 3;
    }

    return p;
}

int main(){
    // w = 3^x
    // c = 3^x * 3 + x * 3^x / 3, where x >= 0
    // n = w1 + w2 + ...

    int t;

    cin >> t;

    while(t--){
        long long n;

        cin >> n;

        long long result = 0;

        int x = 0;

        while(power3(x + 1) <= n){
            x++;
        }

        while(n > 0){
            long long deal = power3(x);
            long long count = n / deal;

            n -= count * deal;
            result += count * cost(x);
            x--;
        }

        cout << result << endl;
    }
}