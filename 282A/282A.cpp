#include <iostream>
using namespace std;

int main(){
    int T;

    cin >> T;

    int ans = 0;

    while(T--){
        string op;

        cin >> op;

        if(op == "++X" || op == "X++"){
            ans++;
        }
        else{
            ans--;
        }
    }

    cout << ans << endl;

    return 0;
}