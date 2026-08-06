#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int T;

    cin >> T;

    while(T--){
        int n;

        cin >> n;

        vector<vector<int>> G(n, vector<int>(n));
        set<int> nums;
        vector<int> p(2 * n, 0);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> G[i][j];
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(p[i + j + 1] == 0){
                    p[i + j + 1] = G[i][j];
                    nums.insert(G[i][j]);
                }
            }
        }

        for(int i = 1; i < (2 * n) + 1; i++){
            if(nums.count(i) == false){
                p[0] = i;
                break;
            }
        }

        for(int i = 0; i < 2 * n; i++){
            cout << p[i] << " ";
        }

        cout << endl;
    }
}