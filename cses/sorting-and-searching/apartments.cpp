#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector <long long> P(n), A(m);

    for (auto &e: P) cin >> e;
    for (auto &e: A) cin >> e;

    sort(P.begin(), P.end());
    sort(A.begin(), A.end());

    int cnt = 0;
    int i = 0, j = 0;
    while (i < n && j < m){
        long long lower = P[i] - k, upper = P[i] + k;

        if (lower <= A[j] && A[j] <= upper){
            cnt++;
            j++;
            i++;
            continue;
        } 

        if (A[j] < lower) j++;
        else if (A[j] > upper) i++;
    }

    cout << cnt << endl;

}