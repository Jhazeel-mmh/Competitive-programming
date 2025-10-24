#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
    int bronzePre, bronzePost,
    silverPre, silverPost,
    goldPre, goldPost,
    platinumPre, platinumPost;

    cin >> bronzePre >> bronzePost;
    cin >> silverPre >> silverPost;
    cin >> goldPre >> goldPost;
    cin >> platinumPre >> platinumPost;

    int goldToPlat = platinumPost - platinumPre;
    int silverToGold = goldPost - goldPre + platinumPost - platinumPre;
    int bronzeToSilver = goldPost - goldPre + platinumPost - platinumPre + silverPost - silverPre;
    cout << bronzeToSilver << "\n" << silverToGold << '\n' << goldToPlat << '\n';
}