#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int val;
    int x, y;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> val;

            if(val == 1){
                x = i;
                y = j;
            }
        }
    }

    int move = abs(x - 2) + abs(y - 2); // distance = |x1 - x2| + |y1 - y2|

    cout << move << endl;

    return 0;
}