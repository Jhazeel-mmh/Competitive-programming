#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin >> _;
    while (_--){
        int n, x, y;
        cin >> n >> x >> y;

        vector <int> out, inside;
        for (int i = 0; i < n; i++){
            int xi; cin >> xi;
            if (i < x) out.push_back(xi);
            else if (i >= y) out.push_back(xi);
            else inside.push_back(xi);
        }

        int minInside = INT32_MAX, indexMinInside = -1;
        for (int i = 0; i < inside.size(); i++){
            if (inside[i] < minInside){
                minInside = inside[i];
                indexMinInside = i;
            }
        }


        int startOut = 0;

        while (startOut < out.size() && out[startOut] < minInside){
            cout << out[startOut] << " ";
            startOut++;
        }
        

        int nInside = inside.size();
        for (int i = indexMinInside, len = 0; len < nInside; len++, i = (i + 1) % nInside){
            cout << inside[i] << " ";
        }
        
        for (int i = startOut; i < out.size(); i++){
            cout << out[i] << " ";
        }
        cout << endl;


    }  

}