#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n; cin >> n;
    vector <int> A(n);
    vector <int> B(n);
    for (auto &s : A) cin >> s;
    for (auto &s : B) cin >> s;

    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (A[i] != B[i]){
            int target = B[i];
            auto index = find(A.begin() + i, A.end(), target);
            int value = A[index - A.begin()];
            A.erase(index);
            A.insert(A.begin() + i, value);

            cnt++;
        }
    }

    cout << cnt << endl;

}