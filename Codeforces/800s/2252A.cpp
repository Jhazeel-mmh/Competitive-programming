#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector <int> a(n);
        for (auto &e: a) cin >> e;

        sort(a.begin(), a.end());
    
        long long totalSum = 0;
        int maxRepetition = 0, maxRepetitionValue = 0;

        int currRep = 1, currRepValue = -1;
        for (auto e : a) {
            totalSum += e;
            if (currRepValue != e){
                currRep = 1;
                currRepValue = e;
            } else if (currRepValue == e){
                currRep++;
            }

            if (currRep > maxRepetition){
                maxRepetition = currRep;
                maxRepetitionValue = currRepValue;
            }
        }

        int otherCards = n - maxRepetition;
        long long maxRepSum = min(otherCards + 2, maxRepetition);
        

        long long ans = (totalSum - (maxRepetitionValue * maxRepetition)) + (maxRepSum * maxRepetitionValue);
        cout << ans << endl;

    }

}


/*
969 914 893 856 826 738 697 536 472 463 275 275 275 275 275 275 275 275 275 275 275 275 275 275 275 210 71 
1    2   3  4    5   6   7   8   9   10  11                      11  10  9   8   7   6   5   4   3   2   1
   7639   +                                                                   
*/