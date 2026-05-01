#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;

    cin >> n >> k;

    vector<int> scores(n);
    // int* scores = new int[n];

    for(int i = 0; i < n; i++){
        cin >> scores[i];
    }

    int threshold = scores[k - 1];
    int num_pass = 0;

    for(int i = 0; i < n; i++){
        if(scores[i] >= threshold && scores[i] > 0){
            num_pass++;
        }
    }

    cout << num_pass << endl;

    // delete[] scores;

    return 0;
}