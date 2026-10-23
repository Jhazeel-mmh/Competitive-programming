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

        vector <string> A(2), B(2);

        bool allEqual = true;
        for (int i = 0; i < n; i++){
            if (a[i] == '1') cntA[i % 2]++;
            A[i % 2].push_back(a[i]);

            if (a[i] != b[i]) allEqual = false;
        }

        for (int i = 0; i < n; i++){
            if (b[i] == '1') cntB[i % 2]++;
            B[i % 2].push_back(b[i]);
        }


        if (cntA[0] == cntB[0] && cntA[1] == cntB[1]) {
            if (allEqual) {
                cout << 0 << endl;
                continue;
            }

            // cout << "EVEN A&B\n";
            // cout << A[0] << endl;
            // cout << B[0] << endl;

            // cout << "ODD A&B\n";
            // cout << A[1] << endl;
            // cout << B[1] << endl;

            vector <vector <int>> idxA(2), idxB(2);
            
            for (int i = 0; i < A[0].size(); i++){
                if (A[0][i] == '1') idxA[0].push_back(i);
                if (B[0][i] == '1') idxB[0].push_back(i);
            }

            for (int i = 0; i < A[1].size(); i++){
                if (A[1][i] == '1') idxA[1].push_back(i);
                if (B[1][i] == '1') idxB[1].push_back(i);
            }

            long long ans = 0;
            for (int i = 0; i < idxA[0].size(); i++){
                ans += abs(idxA[0][i] - idxB[0][i]);
            } 
            
            for (int i = 0; i < idxA[1].size(); i++){
                ans += abs(idxA[1][i] - idxB[1][i]);
            } 

            cout << ans << endl;
        }
        else cout << -1 << endl; 

    }


}