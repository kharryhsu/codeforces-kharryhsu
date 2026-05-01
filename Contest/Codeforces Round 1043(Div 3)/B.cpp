#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;

    cin >> t;

    while(t--){
        long long n;

        cin >> n;

        // y = x * 10^k, where k >= 1
        // n = x + y
        // n = x + x * 10^k
        // n = x(1 + 10^k)
        // x = n / (1 + 10^k)
        // constraint: 11 <= n <= 10^18

        vector<long long> result;

        long long p = 10;

        for(int i = 0; i < 18; i++){
            long long d = 1 + p;

            if(n % d == 0){
                result.push_back(n / d);
            }

            p *= 10;
        }

        if(result.empty()){
            cout << 0 << endl;
        }
        else{
            sort(result.begin(), result.end());

            cout << result.size() << endl;

            for(int i = 0; i < result.size(); i++){
                cout << result[i] << (i == (int)result.size() - 1 ? '\n' : ' ');
            }
        }
    }
}