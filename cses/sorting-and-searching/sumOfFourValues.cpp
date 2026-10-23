#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, x;
    cin >> n >> x;
    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        long long xi;
        cin >> xi;
        a[i] = {xi, i + 1};
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++){
        for (int j = n-1; j >= 0; j--){

            int h = i + 1, k = j-1;

            while (h < k){
                long long suma = a[i].first + a[j].first + a[h].first + a[k].first;

                if (suma == x){
                    printf("%d %d %d %d\n", a[i].second , a[j].second , a[h].second , a[k].second);
                    return 0;
                } else if (suma > x){
                    k--;
                } else {
                    h++;
                }

            }

        }
    }

    cout << "IMPOSSIBLE";
}