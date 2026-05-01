#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxH = *max_element(arr.begin(), arr.end());
    int minH = *min_element(arr.begin(), arr.end());
    int maxIndex = -1;
    int minIndex = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == maxH){
            maxIndex = i;

            break;
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(arr[i] == minH){
            minIndex = i;

            break;
        }
    }

    int swaps = maxIndex + (n - minIndex - 1);

    if(maxIndex > minIndex){
        swaps--;
    }

    cout << swaps << '\n';
}