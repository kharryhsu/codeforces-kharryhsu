#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin >> t;

    while(t--){
        // consider subarray [a(i), a(i + 1)]
        // - if i is even: a(i) >= a(i + 1)
        // - if i is odd: a(i + 1) >= a(i) 
        // if this holds for all consecutive pairs, then it also hold for longer subarray

        int n;

        cin >> n;

        vector<long long> a(n + 1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        long long ans = 0;

        for(int i = 1; i < n; i++){
            if((i % 2) == 0){ // ensure a(i) >= a(i + 1)
                if(a[i] < a[i + 1]){ // cost = max(0, a[i + 1] - a[i])
                    ans += a[i + 1] - a[i];
                    a[i + 1] = a[i];
                }
            }
            else{ // ensure a(i + 1) >= a(i) 
                if(a[i] > a[i + 1]){ // cost = max(0, a[i] - a[i + 1])
                    ans += a[i] - a[i + 1];
                    a[i + 1] = a[i];
                }
            }
        }

        cout << ans << endl;
    }

    // not complete
}