#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while(t--){
        int n;

        cin >> n;

        vector<long long> ai_odd;

        bool state = false;

        long long sum_even = 0;
        long long sum_odd = 0;

        for(int i = 0; i < n; i++){
            long long a;

            cin >> a;

            if((a % 2) == 0){
                sum_even += a;
            }
            else{
                ai_odd.push_back(a);
            }
        }

        if(ai_odd.size() == 0){
            cout << '0' << '\n';
        }
        else if(ai_odd.size() % 2 == 1){
            sort(ai_odd.begin(), ai_odd.end(), std::greater<int>());
            
            for(int i = 0; i < (ai_odd.size() + (2 - 1)) / 2; i++){
                sum_odd += ai_odd[i];
            }

            cout << sum_odd + sum_even << '\n';
        }
        else if(ai_odd.size() % 2 == 0){
            sort(ai_odd.begin(), ai_odd.end(), std::greater<int>());
            
            for(int i = 0; i < (ai_odd.size() + (2 - 1)) / 2; i++){
                sum_odd += ai_odd[i];
            }

            cout << sum_odd + sum_even << '\n';
        }
    }
}