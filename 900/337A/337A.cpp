#include <bits/stdc++.h>
using namespace std;

// Fast IO 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// Solve Function
void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> arr;

    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    int least_diff = 996;

    for(int i = 0; i <= m - n; i++){
        int diff = arr[i + n - 1] - arr[i];

        if(diff <= least_diff){
            least_diff = diff;
        }
    }     

    cout << least_diff << '\n';
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