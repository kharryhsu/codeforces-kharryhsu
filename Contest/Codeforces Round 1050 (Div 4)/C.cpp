#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while(t--){
        int n, m;

        cin >> n >> m;

        vector<int> ai;
        vector<int> bi;

        for(int i = 0; i < n; i++){
            int a, b;

            cin >> a >> b;

            ai.push_back(a);
            bi.push_back(b);
        }

        int points = 0; // start at 0
        int prev_time = 0; // start at 0
        int prev_side = 0; // start at 0

        for(int i = 0; i < n; i++){
            int loop = ai[i] - prev_time;
            int side = prev_side;

            if((loop % 2) == 1){
                side = 1 - side;
            }

            if(side == bi[i]){  // end up in correct side
                points += loop;
                prev_side = side;
            }
            else{ // end up in wrong side(force to rest once)
                if(loop > 0){
                    points += (loop - 1);

                    if(((loop - 1) % 2) == 1){
                        prev_side = 1 - prev_side;
                    }
                }
                
                prev_side = bi[i];
            }

            prev_time = ai[i];
        }

        points += m - prev_time; // run in remaining time

        cout << points << '\n';
    }
}