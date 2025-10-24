#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector <int> nums;

    for (int i = 1; i <= n; i += 2){
        nums.push_back(i);
    }

    for (int i = 2; i <= n; i += 2){
        nums.push_back(i);
    }

    if (n == 4){
        nums = {2, 4, 1, 3};
    }

    for (int i = 0; i < (int) nums.size() - 1; i++){
        if (abs(nums[i] - nums[i + 1]) == 1){
            cout << "NO SOLUTION" << '\n';
            return 0;
        }
    }

    for (int i : nums){
        cout << i << " ";
    }
    cout << '\n';
}