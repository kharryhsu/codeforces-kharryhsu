#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;

    cin >> n;

    int denominations[] = {100, 20, 10, 5, 1};
    long long count = 0;

    for(int i : denominations){
        count += n / i;
        n %= i;
    }

    cout << count << '\n';
}