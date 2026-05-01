#include <iostream>
using namespace std;

int main(){
    int n;
    
    cin >> n;

    string temp;
    string curr;
    
    int ans = 0;

    for(int i = 0; i < n; i++){
        cin >> curr;

        if(curr != temp){
            temp = curr;
            ans += 1;
        }
    }

    cout << ans << endl;
}