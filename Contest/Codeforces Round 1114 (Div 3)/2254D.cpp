#include <bits/stdc++.h>
using namespace std;

// Fast IO 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// Solve Function
void solve() {
    int n;
    string a, b;

    cin >> n;
    cin >> a >> b;

    vector<int> a_pos[2], b_pos[2];

    for(int i = 0; i < n; i++){ // store positions of 1s separated by parity
        if(a[i] == '1'){
            a_pos[i % 2].push_back(i);
        }

        if(b[i] == '1'){
            b_pos[i % 2].push_back(i);
        }
    }
    
    if(a_pos[0].size() != b_pos[0].size() || a_pos[1].size() != b_pos[1].size()){ // check invariant
        cout << -1 << '\n';
        return;
    }

    long long ans = 0;

    for(int parity = 0; parity < 2; parity++){ // calculate minimum moves
        for(int i = 0; i < (int)a_pos[parity].size(); i++){
            ans += abs(a_pos[parity][i] - b_pos[parity][i]) / 2;
        }
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