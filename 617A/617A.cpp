#include <iostream>
using namespace std;

int main(){
    int x;
    
    cin >> x;

    int steps = 0;
    int sizes[] = {5, 4, 3, 2, 1};

    for(int i = 0; i < 5; i++){
        steps += x / sizes[i];
        x %= sizes[i];
    }

    cout << steps << endl;

    return 0;
}