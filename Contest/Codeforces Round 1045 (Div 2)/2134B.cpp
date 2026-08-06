#include <bits/stdc++.h>
using namespace std;

long long get_prime_factor(long long x){
    for(long long i = 2; (i * i) <= x; i++){
        if((x % i) == 0){
            return i;
        }
    }

    return x;
}

int main(){
    int t;

    cin >> t;

    while(t--){
        long long n;
        long long k;

        cin >> n >> k;

        vector<long long> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long p = get_prime_factor(k + 1);

        for(int i = 0; i < n; i++){
            long long m = a[i] % p;

            a[i] += m * k;
        }

        for(int i = 0; i < n; i++){
            cout << a[i] << (i == (n - 1) ? '\n' : ' ');
        }
    }
}