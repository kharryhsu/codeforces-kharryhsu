#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    string s;

    cin >> s;

    for(auto &c : s){
        c = tolower(c);
    }

    set<char> letters;

    for(char c : s){
        letters.insert(c);
    }

    if(letters.size() == 26){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
}