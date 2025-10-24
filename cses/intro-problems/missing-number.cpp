#include <bits/stdc++.h>

using namespace std;

/* alternative
    the sum of 1 to n
    (n * (n + 1)) /2)
    and then substrac the sum of the numbers given
    because
    1 2 3 4 5 = 15
    1 2 3 5 =  11
    the diference is 4 and is the missing number
    */

int main(){
    int n;
    cin >> n;
    vector <int> nums(n - 1);
    for (int i = 0; i < n - 1; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    if (nums[0] != 1){
        cout << 1 << '\n';
        return 0;
    }

    if (nums[1] != 2){
        cout << 2 << '\n';
        return 0;
    }

    int missing = 0;
    for (int i = 0; i < n-2; i++){
        if (nums[i + 1] - nums[i] == 2){
            missing = nums[i] + 1;
            break;
        }
    }

    if (!missing){
        missing = nums.back() + 1;
    }
    cout << missing << '\n';
}