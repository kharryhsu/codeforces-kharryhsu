#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    int a, b;
    int curr = 0;
    int min_cap = 0;

    for(int i = 0; i < n; i++){
        cin >> a >> b;

        curr += b - a;

        if(curr > min_cap){
            min_cap = curr;
        }
    }

    cout << min_cap << endl;
}