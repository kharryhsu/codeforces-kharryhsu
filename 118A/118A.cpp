#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    cin >> s;

    string vowels = "aoyeuiAOYEUI";
    string result = "";

    for(char c : s){
        if(vowels.find(c) == string::npos){
            c = tolower(c);

            result += '.';
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}