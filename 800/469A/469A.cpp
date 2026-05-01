#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    set<int> levels;

    int p;

    cin >> p;

    for(int i = 0; i < p; i++){
        int temp;

        cin >> temp;

        levels.insert(temp);
    }

    int q;

    cin >> q;

    for(int i = 0; i < q; i++){
        int temp;

        cin >> temp;

        levels.insert(temp);
    }

    if(levels.size() == n){
        cout << "I become the guy." << '\n';
    }
    else{
        cout << "Oh, my keyboard!" << '\n';
    }
}