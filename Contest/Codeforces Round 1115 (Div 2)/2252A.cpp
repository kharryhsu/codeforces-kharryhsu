#include <bits/stdc++.h>
using namespace std;

// Fast IO 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// Solve Function
void solve() {
    // let m: the value that appears the most
    //     f: how many times m appears
    //     n: total number of cards
    //     r: number of cards that are not m
    //
    // we need ans = total_sum - sum_of_wasted_cards
    //         ans = total_sum - m * (f - (r + 2)) where r = n - f
    //         ans = total sum - m * (f - (n - f + 2))
    //         ans = total sum - m * (2f - n - 2))
    //
    // ### perfect case: m can seperate f - 1
    // f - 1 <= r
    // f <= r + 1
    // f <= n - f + 1
    // 2f <= n + 1
    // f <= (n + 1) / 2

    int n;
    cin >> n;

    vector<int> a(n);
    long long total = 0;
    map<int, int> freq;
    long long ans = 0;

    for(int &x : a){
        cin >> x;
    }

    for(int x : a){
        total += x;
        freq[x]++;
    }

    int m = 0, f = 0;

    for(auto &x : freq){
        if(x.second > f){
            m = x.first;
            f = x.second;
        }
    }

    if(f <= (n + 1) / 2){
        ans = total;
    }
    else{
        ans = total - (long long)((2 * f) - n - 2) * m;
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