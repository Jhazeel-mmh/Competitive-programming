#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n; cin >> n;
    vector <int> w(n*2);
    for (auto &s : w) cin >> s;
    
    sort(w.begin(), w.end());

    int Mininestability = INT32_MAX; 
    for (int i = 0; i < n*2; i++){
        for (int j = i+1; j < n*2; j++){
            vector <int> tmp;

            for (int t = 0; t < n*2; t++){
                if (t != i && t != j) tmp.push_back(w[t]);
            }
            

            int currMin = 0;
            for (int h = 1; h < tmp.size(); h+=2){
                currMin += tmp[h] - tmp[h-1];
            }
            Mininestability = min(currMin, Mininestability);
        }
    }

    cout << Mininestability << endl;
}

