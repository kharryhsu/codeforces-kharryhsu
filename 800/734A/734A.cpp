#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    char ch;
    int A_nums = 0;
    int D_nums = 0;

    for(int i = 0; i < n; i++){
        cin >> ch;

        if(ch == 'A'){
            A_nums++;
        }
        else{
            D_nums++;
        }
    }

    if(A_nums > D_nums){
        cout << "Anton" << endl;
    }
    else if(A_nums < D_nums){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
}