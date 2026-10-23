#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;

    map<long long, long long> intervals;

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        if (!intervals.count(a)) intervals[a] = 1;
        else intervals[a]+=1;

        if (!intervals.count(b+1)) intervals[b+1] = -1;
        else intervals[b+1]-=1;
    }

    long long ans = 0, pointer = 0;
    for (auto [key, value]: intervals){
        pointer+= value;
        ans = max(ans, pointer);
    }

    cout << ans << endl;

}