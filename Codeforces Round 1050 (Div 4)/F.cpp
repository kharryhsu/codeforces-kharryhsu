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

        vector<int> elements;

        for(int i = 0; i < n; i++){
            int k;

            cin >> k;

            for(int j = 0; j < k; j++){
                int x;

                cin >> x;

                elements.push_back(x);
            }
        }

        for(size_t i = 0; i < elements.size(); i++){
            if(i > 0){
                cout << " ";
            }

            cout << elements[i];
        }

        cout << "\n"; // incomplete
    }
}