#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string s;
    
    cin >> s;

    unordered_set<char> distinct_chars;

    for(char c : s){
        distinct_chars.insert(c);
    }

    if(distinct_chars.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}