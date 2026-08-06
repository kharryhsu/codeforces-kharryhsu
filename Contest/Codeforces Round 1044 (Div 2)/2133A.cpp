#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin >> t;

    while(t--){
        int n;

        cin >> n;

        vector<int> arr(n);
        unordered_map<int, int> freq;

        bool flag = false;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            freq[arr[i]] ++;

            if(freq[arr[i]] >= 2){
                flag = true;
            }
        }

        if(flag == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    // speed(i) = [a(i - 1) / a(i)] * speed(i - 1)
    // speed(n) = a(1) / a(n)
    // a(1) / a(n) = 1 => a(1) = a(n)
}