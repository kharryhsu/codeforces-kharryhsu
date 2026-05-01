#include <iostream>
using namespace std;

int main(){
    string s1, s2;

    cin >> s1 >> s2;

    bool flag = true;

    if(s1.size() != s2.size()){
        cout << "NO" << endl;
        return 0;
    }

    for(int i = 0; i < s1.size(); i++){
        if(s1[i] != s2[s2.size() - 1 - i]){
            flag = false;
            break;
        }
    }

    if(flag == true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}