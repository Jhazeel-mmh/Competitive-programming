#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector <ll> weights;
int n;

ll test_case(int index, ll sum1, ll sum2){
    if (index == n){
        return abs(sum1 - sum2);
    } else {
        return min(test_case(index + 1, sum1 + weights[index], sum2),
                test_case(index + 1, sum1, sum2 + weights[index]));
    }
}

int main(){
    cin >> n;
    weights.resize(n);
    for (auto &e :weights) cin >> e;
    cout << test_case(0, 0, 0) << '\n';
} 