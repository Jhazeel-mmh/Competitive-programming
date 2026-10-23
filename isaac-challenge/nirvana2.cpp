#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    vector <int> d;
    while (n){
        d.push_back(n % 10);
        n /= 10;
    }

    int len = d.size();
    long long ans = 1;

    if (len == 1){
        cout << d[0] << endl;
        return 0;
    }

    reverse(d.begin(), d.end());


    for (int i = 0; i < len; i++){
        long long currAns = 1;

        for (int j = 0; j < i; j++) currAns *= d[j];

        if (d[i] == 0) break;

         if (d[i] == 1 && i == 0) {
            for (int j = i + 1; j< n; j++) currAns *= 9;
            ans = max(ans, currAns);
            continue;
        } 
        
        
        if (d[i] == 1 && i > 0) {
            for (int j = i + 1; j< n; j++) currAns *= d[j];
            ans = max(ans, currAns);
            continue;
        } 

        currAns *= d[i] - 1;

        for (int j = i + 1; j < len; j++) currAns *= 9;
        
        ans = max(ans, currAns);
    }

    cout << ans << endl;
}