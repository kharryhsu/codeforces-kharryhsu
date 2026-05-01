#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    string stones;

    cin >> stones;

    int track_duplicate = 0;

    for(int i = 1; i < n; i++){
        if(stones[i] == stones[i - 1]){
            track_duplicate++;
        }
    }

    cout << track_duplicate << endl;

    return 0;
}