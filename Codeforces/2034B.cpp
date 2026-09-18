#include <bits/stdc++.h>
using namespace std;
int main()
{
    // incompleted
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        int ans = 0;
        int i = 0, currSegment = 0;
        while (i < n ){
            if (s[i] == '0'){
                currSegment++;
                
                if (currSegment >= m){
                    ans++;
                    i += k;
                    currSegment = 0;
                } else i++;
            } else {
                currSegment = 0;
                i++;
            }
        }
        cout << ans << endl;
    }
}