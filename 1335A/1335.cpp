#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while(t--){
        int n;

        cin >> n;

        // n = a + b, a > b
        // a = n - b
        // n - b > b
        // n > 2b
        // b < n / 2
        // b can be 1 to floor((n - 1) / 2)

        cout << (n - 1) / 2 << '\n';
    }
}