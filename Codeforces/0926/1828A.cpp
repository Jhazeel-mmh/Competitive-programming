#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;

        int multp = 1;
        if (n & 1) multp = 1;
        else multp = 2;
        for (int i = 1; i <= n; i++){
            cout << i * multp << " ";
        }

        cout << endl;


    }

}