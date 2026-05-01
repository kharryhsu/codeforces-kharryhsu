#include <iostream>
using namespace std;

int main(){
    int T;

    cin >> T;

    while(T--){
        int n, m, l, r;

        cin >> n >> m >> l >> r;

        int l_prime = 0;
        int r_prime = 0;

        while(m > 0){
            if(m > 0 && r_prime < r){
                r_prime++;
                m--;
            }

            if(m > 0 && l_prime > l){
                l_prime--;
                m--;
            }
        }
        
        cout << l_prime << " " << r_prime << endl;
    }

    return 0;
}