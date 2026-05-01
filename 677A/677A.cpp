#include <iostream>
using namespace std;

int main(){
    int n, h;

    cin >> n >> h;

    int ans = 0;

    for(int i = 0; i < n; i++){
        int temp;

        cin >> temp;

        if(temp > h){
            ans += 2;
        }
        else{
            ans ++;
        }
    }

    cout << ans << endl;
}