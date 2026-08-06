#include <bits/stdc++.h>
using namespace std;

// Fast IO 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// Solve Function
void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if((a + b) == c || (a + c) == b || (b + c) == a){
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