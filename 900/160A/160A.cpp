#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> arr(n);

    int sum = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        
        sum += arr[i];
    }

    int half_val = sum / 2;

    sort(arr.begin(), arr.end());

    sum = 0;

    int num_coins = 0;

    for(int i = n - 1; i >= 0; i--){
        sum += arr[i];
        num_coins ++;

        if(sum > half_val){
            break;
        }
    }

    cout << num_coins << endl;
}