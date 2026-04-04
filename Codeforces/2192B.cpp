#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;  

        int ones = 0, zeros = 0;
        for (char c: s){ 
            if (c == '1') ones++;
            else zeros++;
        }

        if (ones == 0) cout << 0 << endl;
        else if (ones % 2 != 0){
            if (zeros % 2 != 0){
                cout << zeros << endl;
                for (int i = 0; i < n; i++){
                if (s[i] == '0') cout << i + 1 << " "; 
            }
            cout << endl;
            } else 
                cout << -1 << endl;
        } else {
            cout << ones << endl;
            for (int i = 0; i < n; i++){
                if (s[i] == '1') cout << i + 1 << " "; 
            }
            cout << endl;
        }
    }
}