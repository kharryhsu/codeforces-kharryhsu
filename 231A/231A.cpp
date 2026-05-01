#include <iostream>
using namespace std;

int main(){
    int T;

    cin >> T;

    int ans = 0;

    while(T--){
        int l, m, n;

        cin >> l >> m >> n;

        if(l + m + n >= 2){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}