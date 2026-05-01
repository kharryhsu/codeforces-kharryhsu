#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin >> t;

    while(t--){
        int a, b;

        cin >> a >> b;

        // (a + x) mod b = 0
        // x = -a mod b
        // x = [b - (a mod b)] mod b

        cout << (b - (a % b)) % b << '\n';
    }
}