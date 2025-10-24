#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector <int> cola(N);
    for (int i = 0; i < N; i++) cin >> cola[i];

    if (cola[0] == cola[1]){
        cout << 1 << " " << 2 << '\n';
    }

    for (int i = 0; i < N - 2; i++){
        if (cola[i] == cola[i + 1] || cola[i] == cola[i+2] || cola[i+1] == cola[i+2]){
            cout << i + 1 << " " << i + 3 << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
}