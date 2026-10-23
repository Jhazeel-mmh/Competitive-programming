#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int _;
    cin >> _;
    while(_--){
        int n; cin >> n;
        string s; cin >> s;

        vector <pair <char, int>> a;

        char currChar = '*';
        int currLen = -1;
        for (int i = 0; i < n; i++){
            if (s[i] == currChar){
                currLen++;
            } else {
                a.push_back({currChar, currLen});
                currLen = 1;
                currChar = s[i];
            }
        }   
        a.push_back({currChar, currLen});

        // vector <bool> canDelete(a.size());
        bool canDelete = false, canDeleteTwo = false;
        for (int i = 2; i < a.size() - 1; i++){
            if (a[i].second == 1){
                canDelete = true;
                if (a[i - 1].first == a[i + 1].first)canDeleteTwo = true;
            }
        }

    

        cout << a.size() - 1 - canDelete - canDeleteTwo << endl;

    }
}