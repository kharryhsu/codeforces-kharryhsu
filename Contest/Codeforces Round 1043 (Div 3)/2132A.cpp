#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main(){
    int t;

    cin >> t;

    while(t--){
        int n;
        int m;

        string s1;
        string s2;
        string q;
        
        cin >> n;
        cin >> s1;
        cin >> m;
        cin >> s2;
        cin >> q;

        char temp;

        for(char c : q){
            if(c == 'D'){
                if (!s2.empty()) {
                    temp = s2.front();
                    s1.insert(s1.end(), temp);
                    s2.erase(s2.begin());
                }
            }
            else if(c == 'V'){
                if (!s2.empty()) {
                    temp = s2.front();
                    s1.insert(s1.begin(), temp);
                    s2.erase(s2.begin());
                }
            }
        }

        cout << s1 << endl;
    }
}