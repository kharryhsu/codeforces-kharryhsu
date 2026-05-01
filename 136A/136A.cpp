#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> p(n);
    vector<int> res(n);

    for(int i = 0; i < n; i++){
        // base case
        // 1 -> 2
        // 2 -> 3
        // 3 -> 4
        // 4 -> 1
        cin >> p[i];
    }

    for(int i = 0; i < n; i++){
        // base case
        // 1 <- 4
        // 2 <- 1
        // 3 <- 2
        // 4 <- 3
        int recv = p[i];

        res[recv - 1] = i + 1;
    }

    for(int i = 0; i < n; i++){
        cout << res[i] << (i == (n - 1) ? '\n' : ' ');
    }
}