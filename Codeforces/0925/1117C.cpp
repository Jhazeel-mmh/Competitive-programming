#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool reachable(ll ax, ll ay, ll bx, ll by, string s, ll time){
    ll wind_y = 0;
    ll wind_x = 0;

    for (auto c: s){
        if (c == 'U') wind_y++;
        else if (c == 'D') wind_y--;
        else if (c == 'L') wind_x--;
        else if (c == 'R')  wind_x++;
    }
    
    wind_x *= time / s.size();
    wind_y *= time / s.size();
    ll remainder = time % s.size();

    for (long long i = 0; i < remainder; i++){
        if (s[i] == 'U') wind_y++;
        else if (s[i] == 'D') wind_y--;
        else if (s[i] == 'L') wind_x--;
        else if (s[i] == 'R')  wind_x++;
    }   

    ax += wind_x;
    ay += wind_y;
    return (abs(ax - bx) + abs(ay - by)) <= time;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll ax, ay;
    cin >> ax >> ay;
    ll bx, by;
    cin >> bx >> by;

    ll n; cin >> n;
    string s; cin >> s;

    ll lo = 0, hi = INT64_MAX / 2;
    ll valid = -1;

    while (lo <= hi){
        ll mid = (lo + hi) / 2;

        if (reachable(ax, ay, bx, by, s, mid)){
            valid = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }

    }
    cout << valid << endl;
}   