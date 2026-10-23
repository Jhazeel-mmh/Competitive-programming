#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int a = 0, b = 0;

        for (char c : s){
            if (c == '(') a++;
            else if (c == ')') b++;
        }

        cout << (a == b ? "YES" : "NO") << endl;

        
    }


}