#include <iostream>
using namespace std;

int main(){
    int k, n, w;

    cin >> k >> n >> w;

    int sum = 0;

    for(int i = 1; i < w + 1; i++){
        sum += k * i;
    }

    int borrow_money = sum - n;

    if(borrow_money < 0){
        cout << '0' << endl;
    }
    else{
        cout << borrow_money << endl;
    }

    return 0;

}