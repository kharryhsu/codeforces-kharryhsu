#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    vector<int> h;
    vector<int> a;

    int hi, ai;

    for(int i = 0; i < n; i++){
        cin >> hi >> ai;

        h.push_back(hi);
        a.push_back(ai);
    }

    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            else if(h[i] == a[j]){
                count++;
            }
        }
    }

    cout << count << '\n';
}