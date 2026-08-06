#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        int n;

        cin >> n;

        vector<long long> g(n);

        for(int i = 0; i < n; i++){
            cin >> g[i];
        }

        sort(g.begin(), g.end(), greater<long long>());

        long long ans = 0;

        for(int i = 0; i < n; i+=2){
            ans += g[i];
        }

        cout << ans << endl;
    }
}
