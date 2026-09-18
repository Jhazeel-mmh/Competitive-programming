#include <bits/stdc++.h>
using namespace std;

void usaco(string name){
    string inp = name + ".in";
    string out = name + ".out";
    freopen(inp.data(), "r", stdin);
	freopen(out.data(), "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
}

int convertNumber(string s){
    int n = s.size();
    int ans = 0, factor = 1;
    for (int i = n - 1; i >= 0; i--){
        int x = s[i] - '0';
        x *= factor; 
        ans+= x;
        factor *= 10;
    }
    return ans;
}

int main(){
    // usaco("measurement");
    int n;
    cin >> n;

    map <int, pair <string , string >> changes;

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        cin >> changes[x].first >> changes[x].second;
    }
   
    int ans = 0;
    map <string, int> cows, dailyChange;
    
    cows["Bessie"] = 0; cows["Elsie"]= 0; cows["Mildred"]= 0;
    dailyChange["Bessie"] = 7; dailyChange["Elsie"]= 7; dailyChange["Mildred"]= 7;
    

    map <string, int> record;

    for (int i = 1; i <= 100; i++){
        if (changes.count(i)){
            int sing = (changes[i].second[0] == '+' ? 1 : -1);
            dailyChange[changes[i].first] += sing * convertNumber(changes[i].second.substr(1));   
        }

        cows["Bessie"] += dailyChange["Bessie"]; 
        cows["Elsie"] += dailyChange["Elsie"]; 
        cows["Mildred"] += dailyChange["Mildred"];

        cout << dailyChange["Bessie"] << " " << dailyChange["Mildred"] << " " << dailyChange["Elsie"] << endl; 

        map <string, int> currRecord;
        int maxMilk = 0;

        for (auto cow : cows){
            maxMilk = max(cow.second, maxMilk);
        }

        for (auto cow : cows){
            if (cow.second == maxMilk) currRecord[cow.first] = maxMilk;
        }

        vector <string> oldKeys, keys;
        for (auto cow : currRecord) keys.push_back(cow.first); 
        for (auto cow : record) oldKeys.push_back(cow.first); 

        if (oldKeys.size() && oldKeys != keys){
            ans++;
        }

    }
    cout << ans << endl;



}