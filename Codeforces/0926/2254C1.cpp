#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int _;
    cin >> _;
    while (_--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        vector <int> cntA(2), cntB(2);


        for (int i = 0; i < n; i++){
            if (a[i] == '1'){
                cntA[i % 2]++;
            }
        }

        for (int i = 0; i < n; i++){
            if (b[i] == '1'){
                cntB[i % 2]++;
            }
        }


        if (cntA[0] == cntB[0] && cntA[1] == cntB[1]) cout << "YES" << endl;
        else cout << "NO" << endl; 

    }


}