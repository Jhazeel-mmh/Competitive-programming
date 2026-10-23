#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> a(n);
    for (auto &e: a) cin >> e;

    stack <pair <int,int>> s;

    for (int i = 0; i < n; i++){
        while (!s.empty()){
            auto [value, idx] = s.top();
            if (value < a[i]){
                cout << idx << " ";
                break;
            } else 
                s.pop();
        }

        if (s.empty()) {
            cout << 0 << " ";
            s.push({a[i], i + 1});
        }
        else s.push({a[i], i + 1});
    }    
}