#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while(t--){
        int x, n;

        cin >> x >> n;

        // n = k, x - x + x - x + ...
        // if n = odd, sum = x
        // if n = even, sum = 0

        if((n % 2) == 1){
            cout << x << '\n';
        }
        else{
            cout << '0' << '\n';
        }
    }

    return 0;
}