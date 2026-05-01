#include <bits/stdc++.h>
using namespace std;

// Fast IO 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// Solve Function
void solve() {
    int n;
    int temp;

    cin >> n;

    vector<int> arr;
    vector<int> lis(n, 1);

    for(int i = 0; i < n; i++){
        cin >> temp;

        arr.push_back(temp);
    }

    for(int i = 1; i < n; i++){
            if(arr[i] >= arr[i - 1]){
                lis[i] = max(lis[i], lis[i - 1] + 1);
            }
    }

    cout << *max_element(lis.begin(), lis.end()) << '\n';
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