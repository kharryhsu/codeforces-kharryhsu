#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    int ans = 0;
    int p, q;

    for(int i = 0; i < n; i++){
        cin >> p >> q;

        if(q - p >= 2){
            ans ++;
        }
    }

    cout << ans << endl;
}