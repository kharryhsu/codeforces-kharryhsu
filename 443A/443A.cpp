#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;

    set<char> letters;

    getline(cin, s);

    for(char c : s){
        if((c >= 'a' && c <= 'z')){
            letters.insert(c);
        }
    }

    cout << letters.size() << '\n';

    return 0;
}