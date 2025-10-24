#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("angry.in", "r", stdin);
    freopen("angry.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    set <int> a;

    for (auto i = 0; i < n; i++){
        int x; cin >> x;
        a.insert(x);
    }

    vector <int> angryCows;
    for (auto element : a){

        angryCows.push_back(element);
    }

    int maxExplosions = 0, theCow = 0;

    for (int i = 0; i < n; i++){
        int currentCow = angryCows[i];
        int cowsExploded = 1;

        int t = 1;
        int l = i-1, currentL = i;
        while (l >= 0){
            if (abs(angryCows[currentL] - angryCows[l]) <= t){
                cowsExploded++;
                l--;
            } else if (abs(angryCows[currentL] - angryCows[l]) > t && abs(l - currentL) > 1){
                t++;
                currentL = l+1;
            } else {
                break;
            }   
        }
        

        t = 1;
        int r = i+1, currentR = i;
        while (r < n){
            if (abs(angryCows[currentR] - angryCows[r]) <= t){
                cowsExploded++;
                r++;
            } else if (abs(angryCows[currentR] - angryCows[r]) > t && abs(r - currentR) > 1){
                t++;
                currentR = r-1;
            } else {
                break;
            }
        }
        

        if (cowsExploded > maxExplosions){
            maxExplosions = cowsExploded;
            theCow = currentCow;
        }
    }

    cout << maxExplosions << '\n';

}