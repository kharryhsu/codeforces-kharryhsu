#include <bits/stdc++.h>
using namespace std;

// Fast IO 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

// Solve Function
void solve() {
    vector<int> arr(3);
    int rounds = 0;

    cin >> arr[0] >> arr [1] >> arr[2];

    while(true){
        if(arr[0] == arr[1] || arr[0] == arr[2] || arr[1] == arr[2]){ // 2nd case
            break;
        }

        int max_idx = 0;
        int min_idx = 0;

        for(int i = 0; i < 3; i++){ // 1st case
            if(arr[i] > arr[max_idx]){
                max_idx = i;
            }
            if(arr[i] < arr[min_idx]){
                min_idx = i;
            }
        }

        arr[max_idx]--; // give
        arr[min_idx]++; // get
        rounds++;
    }

    cout << rounds << '\n';
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