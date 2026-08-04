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

    // observation: 1. number of 1s must be equal(not true by case 2)
    //              2. number 1s in even and odd parity of A and B must be the same

    int a_even_parity_nums = 0, a_odd_parity_nums = 0;
    int b_even_parity_nums = 0, b_odd_parity_nums = 0;

    for(int i = 0; i < n; i ++){
        if(a[i] == '1'){
            if((i % 2) == 0){
                a_even_parity_nums++;
            }
            else{
                a_odd_parity_nums++;
            }
        }
        
        if(b[i] == '1'){
            if((i % 2) == 0){
                b_even_parity_nums++;
            }
            else{
                b_odd_parity_nums++;
            }
        }
    }

    if (a_even_parity_nums == b_even_parity_nums && a_odd_parity_nums == b_odd_parity_nums){
        cout << "YES\n";
    } 
    else{
        cout << "NO\n";
    }  
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