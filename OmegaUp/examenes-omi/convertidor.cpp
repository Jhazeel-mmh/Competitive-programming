#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t; cin >> t;
    
    unsigned long res = 0;
    if (t == 1){
        string s; cin >> s;
        int len = s.size();
        for (int i = 0; i < len; i++){
            res += (s[i] - 'A' + 1) * pow(26, len-i-1);
        }
         cout << res << '\n';
    } else {
        unsigned long long x; cin >> x;
        int exp = 0;
        string result = "";
        for (int i = 0; i <= 13; i++){

            if (i == 13){
                unsigned long long p13 = pow(26,13);

                for (int j = 7; j >= 1; j--){
                    if ((p13 * j) <= x){
                        result.push_back('A' + j - 1);
                        break;
                    }
                }
            }

            if (x < pow(26, i)){
                exp = i;
                break;
            }
        }

        for (int e = exp; e >= 0; e--){

            for (int j = 26; j >= 1; j--){
                if ((pow(26, e-1)*j) <= x){
                    result.push_back('A' + j - 1);
                    x -= pow(26, e-1)*j;
                    break;
                }
            }

        }

        cout << result << '\n';

    }
}