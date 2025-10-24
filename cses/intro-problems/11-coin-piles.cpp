#include <bits/stdc++.h>
using namespace std;

void coin_piles(){
    int a, b;
    cin >> a >> b;

    int lessertt = min(a, b) * 2;
    int maximum = max(a, b);

    if ((a + b) % 3 == 0 && !(maximum > lessertt)){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
} 

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        coin_piles();
    }
}