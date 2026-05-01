#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while(t--){
        int n, m, x, y;

        cin >> n >> m >> x >> y;

        vector<int> ai;
        vector<int> bi;

        for(int i = 0; i < n; i++){
            int temp;

            cin >> temp;

            ai.push_back(temp);
        }

        for(int i = 0; i < m; i++){
            int temp;

            cin >> temp;

            bi.push_back(temp);
        }

        cout << ai.size() + bi.size() << '\n';
    }
}