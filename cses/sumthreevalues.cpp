#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, s; cin >> n >> s;
    vector <int> a(n);
    for (auto &e : a) cin >> e;
 
    vector <int> aux(a.begin(), a.end());
    sort(a.begin(), a.end());
 
    vector <int> nums;
    for (int i = 0; i < n; i++){
        long long target = s - a[i];
        int l, r;
        if (i+1 >= n){
            continue;
        }
 
        
        l = i+1, r = n-1;
 
        long long currSum = 0;
        while(l < n && l != r){
            currSum = a[l] + a[r];
 
            while (currSum > target){
                r--;
                currSum = a[l] + a[r];
            }
            while (currSum < target){
                l++;
                currSum = a[l] + a[r];
            } 
            if (currSum == target && l != r && r != i && l != i){
                nums.push_back(a[i]);
                nums.push_back(a[l]);
                nums.push_back(a[r]);
                break;
            }
        }
 
        if (nums.size() == 3){
            vector <int> tmp;
            for (auto p : nums){
                int f = find(aux.begin(), aux.end(), p) - aux.begin() + 1;
                tmp.push_back(f);
            }
            sort(tmp.begin(), tmp.end());
            
            for (auto p : tmp){
                cout << p << " ";
            }
            cout << '\n';
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << '\n';
}