#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int duplicate = 0;
    bool flag = false;

    cin >> s;

    for(int i = 1; i < s.size(); i++){
        if(s[i - 1] == s[i]){
            duplicate ++;
        }
        else{
            duplicate = 0;
        }

        if(duplicate == 6){
            flag = true;
            break;
        }
    }

    if(flag == true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}