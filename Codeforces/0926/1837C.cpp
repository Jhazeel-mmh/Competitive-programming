#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--){
        string s;
        cin >> s;
        int n = s.size();

        
        bool apartOfQ = false;
        for (auto c: s){
            if (c != '?') {apartOfQ = true; break;}
        }

        vector <pair <int, char>> a;

        int currLen = 1;
        char currChar = s[0];
        for (int i = 1; i < n; i++){
            if (s[i] != currChar){
                a.push_back({currLen, currChar});
                currChar = s[i];
                currLen = 1;
            } else if (s[i] == currChar){
                currLen++;
            }
        }
        a.push_back({currLen, currChar});


        int len = a.size();

        if (!apartOfQ){
            for (int i = 0; i < n; i++) cout << 0;
            cout << endl;
            continue;
        }

        for (int i = 0; i < len; i++){
            int cl = a[i].first;
            char cc = a[i].second,
            prevChar = (i - 1 >= 0 ? a[i-1].second : '+'),
            nextChar = (i + 1 < len ? a[i+1].second : '+')
            ;

            if (cc != '?'){
                for (int j = 0; j < cl; j++) cout << cc;
            } else {
                if (prevChar != '+'){
                    for (int j = 0; j < cl; j++) cout << prevChar;
                } else if (nextChar != '+'){
                    for (int j = 0; j < cl; j++) cout << nextChar;
                }
            }
        }
        cout << endl;

    }

}