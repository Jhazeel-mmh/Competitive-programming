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
        string s;
        cin >> s;

        stack <char> st;
        for (char c: s){
            if (st.size() && c == st.top()) st.pop();
            else st.push(c);
        }

        cout <<  (st.empty() ? "YES" : "NO") << endl; 

    }  

}