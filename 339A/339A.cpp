#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;

    cin >> s;

    int count_one = 0;
    int count_two = 0;
    int count_three = 0;
    int nums_length = (s.length() / 2) + 1;

    for(int i = 0; i < s.length(); i += 2){
        if(s[i] == '1'){
            count_one++;
        }
        else if(s[i] == '2'){
            count_two++;
        }
        else{
            count_three++;
        }
    }

    while(count_one--){
        nums_length--;
        
        if(nums_length == 0){
            cout << "1" << endl;
            return 0;
        }
        else{
            cout << "1+";
        }
    }

    while(count_two--){
        nums_length--;
        
        if(nums_length == 0){
            cout << "2" << endl;
            return 0;
        }
        else{
            cout << "2+";
        }
    }

    while(count_three--){
        nums_length--;
        
        if(nums_length == 0){
            cout << "3" << endl;
            return 0;
        }
        else{
            cout << "3+";
        }
    }
    
    return 0;
}