#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    string ans = "";

    for (int i = 0 ; i < s.size(); i++){
        ans+= s[i];
        ans+= 'o';
    }

    
    cout << ans.substr(0, ans.size() - 1) << endl;

}