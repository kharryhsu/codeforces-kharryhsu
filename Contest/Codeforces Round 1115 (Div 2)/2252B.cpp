#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// Solve Function
void solve(){
    // For each group:
    // 000 -> delete 2 zeros
    // 1111 -> delete 3 ones
    //
    // c0 = number of 0s we need to delete
    // c1 = number of 1s we need to delete
    //
    // Deleted characters must alternate:
    // 0 1 0 1 ...
    // so |c0 - c1| must be <= 1

    int n;
    cin >> n;

    string s;
    cin >> s;

    // Run length encoding
    // 100110 -> 1 | 00 | 11 | 0
    vector<pair<char,int>> runs;

    int i = 0;

    while(i < n){
        int j = i;

        while(j < n && s[j] == s[i]){
            j++;
        }

        runs.push_back({s[i], j - i});
        i = j;
    }

    long long c0 = 0;
    long long c1 = 0;

    // Count required deletions
    for(auto &x : runs){
        if(x.first == '0'){
            c0 += x.second - 1;
        }
        else{
            c1 += x.second - 1;
        }
    }

    long long diff = abs(c0 - c1);

    // Perfect case:
    // The deletion sequence can already alternate
    if(diff <= 1){
        cout << c0 + c1 << '\n';
        return;
    }

    // The character with fewer required deletions
    // is the one we need to add extra deletions from
    char minority;

    if(c0 < c1){
        minority = '0';
    }
    else{
        minority = '1';
    }

    // Number of extra deletions needed to make:
    // abs(c0 - c1) <= 1
    long long needed = diff - 1;

    // Extra deletions can only happen on the two ends
    int available = 0;

    if(runs.front().first == minority){
        available++;
    }

    if(runs.size() >= 2 && runs.back().first == minority){
        available++;
    }

    if(available >= needed){
        cout << c0 + c1 + needed << '\n';
    }
    else{
        cout << -1 << '\n';
    }
}

// Main Function
int main(){
    fastio;

    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}