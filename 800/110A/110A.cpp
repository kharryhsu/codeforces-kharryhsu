#include <iostream>
using namespace std;

int main(){
    string n;

    cin >> n;

    bool flag = true;

    int num = 0;

    for(char c : n){
        if(c == '4' || c == '7'){
            num++;
        }
    }

    if(num == 0) {
        cout << "NO" << endl;
        return 0;
    }

    while(num > 0){
        int check = num % 10;

        if(check != 4 && check != 7){
            flag = false;
            break;
        }

        num /= 10;
    }

    if(flag == true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}