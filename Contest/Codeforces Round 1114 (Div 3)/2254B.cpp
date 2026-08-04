#include <bits/stdc++.h>
using namespace std;

// Fast IO 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// Solve Function
void solve() {
    int n;
    string str;

    cin >> n;
    cin >> str;

    int compressed_size = 1;

    for(int i = 1; i < n; i++){
        if(str[i - 1] != str[i]){
            compressed_size++;
        }
    }

    int ans = INT32_MAX;

    for(int i = 1; i <= n - 2; i++){
        int before = (str[i - 1] != str[i]) + (str[i] != str[i + 1]); // boundaries removed by deleting str[i]
        int after = (str[i - 1] != str[i + 1]); // new boundary created after deletion
        ans = min(ans, compressed_size - before + after); // minimum compressed length
    }

    cout << ans << '\n';
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