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
        string s;
        cin >> s;

        int largest = 0;

        char currentVal = -1;
        int currSeg = 0;
        for (int i = 0; i < n; i++){
            if (s[i] != currentVal){
                currentVal = s[i];
                currSeg = 1;
            } else if (s[i] == currentVal){
                currSeg++;
            }
            
            if (currentVal == '#'){
                largest = max(largest, currSeg);
            }

        }

        if (!largest) cout << 0 << endl;
        else if (largest <= 2){
            cout << 1 << endl;
        } else {
            cout << ceil((float) largest / 2.0) << endl;
        }


    }    
}