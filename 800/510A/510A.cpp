#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(((i + 1) % 2) == 0){
                if((((i + 1) / 2) % 2) == 1){
                    cout << ((j == (m - 1)) ? "#\n" : ".");
                }
                else{
                    cout << ((j == 0) ? "#" : (((j == (m - 1)) ? ".\n" : ".")));
                }
            }
            else{
                cout << ((j == (m - 1)) ? "#\n" : "#");
            }
        }
    }
}