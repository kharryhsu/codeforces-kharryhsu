#include <iostream>
using namespace std;

int main(){
    int T;

    cin >> T;

    while(T--){
        string p, s;

        cin >> p;
        cin >> s;

        int i = 0, j = 0;

        while(i < p.length() && j < s.length()){
            if(p[i] != s[j]){
                break;
            }
            
            j++;

            if(j < s.length() && s[j] == p[i]){
                j++;
            }

            i++;
        }

        if(i == p.length() && j == s.length()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

// Not Complete