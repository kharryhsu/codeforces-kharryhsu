#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    double total = 0;

    for(int i = 0; i < n; i++){
        double temp;

        cin >> temp;

        total += temp;
    }

    double vol = total / n;

    cout << setprecision(12);

    cout << vol << '\n';
}