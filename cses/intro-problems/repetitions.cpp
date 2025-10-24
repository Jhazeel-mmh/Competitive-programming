#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin >> n;

    int len = n.size();

    char c = n[0];
    int curRepetitions = 1, maxRep = 1;
    for (int i = 1; i < len; i++){
        if (c == n[i]){
            curRepetitions++;
        } else {
            c = n[i];
            curRepetitions = 1;
        }
        if (curRepetitions > maxRep) maxRep = curRepetitions;
    }

    cout << maxRep << '\n';
}