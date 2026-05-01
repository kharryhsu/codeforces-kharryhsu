#include <bits/stdc++.h>
using namespace std;

// Fast IO 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// Solve Function
void solve() {
    int n;
    cin >> n;

    // n = 2020a + 2021b
    // n = 2020a + (2020 + 1) * b
    // n = 2020a + 2020b + b
    // n = 2020(a + b) + b
    // n = 2020k + r

    int k = n / 2020; // max number of 2020 blocks
    int r = n % 2020; // leftover after using 2020s

    // need r "extra +1", each 2021 gives +1, so need r <= k
    if(k >= r){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
}

// Main Function
int main() {
    fastio;

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}