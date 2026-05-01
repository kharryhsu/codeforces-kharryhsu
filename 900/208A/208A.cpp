#include <bits/stdc++.h>
using namespace std;

// Fast IO 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// Solve Function
void solve() {
    string s1;
    string result;

    cin >> s1;

    for(int i = 0; i < s1.size();){
        if(s1.substr(i, 3) == "WUB"){
            if(!result.empty() && result.back() != ' '){
                result += ' ';
            }
            i += 3;
        }
        else{
            result += s1[i];
            i++;
        }
    }

    cout << result << '\n';
}

// Main Function
int main() {
    fastio;

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}