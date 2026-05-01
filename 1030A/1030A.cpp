#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    int temp;
    bool flag = true;

    for(int i = 0; i < n; i++){
        cin >> temp;

        if(temp == 1){
            flag = false;

            break;
        }
    }

    if(flag == true){
        cout << "EASY" << endl;
    }
    else{
        cout << "HARD" << endl;
    }
}