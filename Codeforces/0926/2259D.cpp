#include <bits/stdc++.h>
using namespace std;

bool stillOk(vector <pair<int,int>> &vec, int A, int B, int C, int i){
    int n = vec.size();

    for (; i < n; i++){
        int xi = vec[i].first, idxXi = vec[i].second;
        if (A != xi || B != xi || C != xi){
            continue;
        } else {
            return false;
        } 
    }
    return true;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int _;
    cin >> _;
    while(_--){
        int n;
        cin >> n;
        vector <pair<int,int>> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        
        sort(a.begin(), a.end());
        vector <char> ans(n, '*');

        int A = 0, B = 0, C = 0;
        bool ok = false;
        int i = 0;
        for (; i < n; i++){
            int xi = a[i].first, idxXi = a[i].second;
            bool eq = false;
            if (A == xi){
                A++;
                ans[idxXi] = 'A';
                eq = true;
            } else if (B == xi){
                B++;
                ans[idxXi] = 'B';
                eq = true;
            } else if (C == xi) {
                C++;
                ans[idxXi] = 'C';
                eq = true;
            } 

            if (A + B + C >= 2*max({A, B, C})){
                ok = true;
                if (stillOk(a, A, B, C, i + 1)){
                    i+= eq;
                    break;
                }
            } else {
                ok = false;
            }
        }


        for (; i < n && ok; i++){
            int xi = a[i].first, idxXi = a[i].second;
            if (A != xi){
                ans[idxXi] = 'A';
            } else if (B != xi){
                ans[idxXi] = 'B';
            } else if (C != xi) {
                ans[idxXi] = 'C';
            } 
        }

        cout << (ok ? "YES" : "NO") << endl;
        if (!ok) continue;
        
        for (char x : ans) cout << x;
        cout << endl;


    }

}