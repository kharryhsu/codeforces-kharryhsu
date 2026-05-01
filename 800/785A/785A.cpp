#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    unordered_map<string, int> polyhedrons = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20},
    };

    long long count = 0;

    for(int i = 0; i < n; i++){
        string s;

        cin >> s;

        count += polyhedrons[s];
    }

    cout << count << '\n';
}