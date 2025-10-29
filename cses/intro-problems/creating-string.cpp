#include <bits/stdc++.h>
using namespace std;

string input;
string currPermutation;
set <string> permutations;
vector <bool> chosen;
int n;

void search(){
    if (currPermutation.size() == n){
        permutations.insert(currPermutation);
    } else {
        for (int i = 0; i < n; i++){
            if (chosen[i]) continue;
            chosen[i] = true;
            currPermutation.push_back(input[i]);
            search();
            currPermutation.pop_back();
            chosen[i] = false;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> input;
    n = input.size();
    chosen.resize(n, false);
    search();
    cout << permutations.size() << '\n';
    for (auto s: permutations) cout << s << '\n';
}