#include <iostream>
#include <set>
#include <string>
using namespace std;

bool is_distinct_digit(int num){
    set<int> digits;
    string num_str = to_string(num);

    for(char c: num_str){
        if(digits.count(c) == true){
            return false;
        }

        digits.insert(c);
    }

    return true;
}

int main(){
    int y;

    cin >> y;

    while(true){
        y += 1;

        if(is_distinct_digit(y)){
            break;
        }
    }

    cout << y << endl;
}