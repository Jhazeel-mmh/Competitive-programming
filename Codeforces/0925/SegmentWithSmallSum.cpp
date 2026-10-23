#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, target; cin >> n >> target;

    vector <long long> a(n);
    for (long long i = 0; i < n; i++) cin >> a[i];

    long long i = 0, j = 0;
    long long maxSegment = 0, currentSum = 0;
    while (i < n){
        currentSum += a[i];
        while (currentSum > target && j < n){
            currentSum -= a[j];
            j++;
        }
        maxSegment = max(maxSegment, i-j+1);
        i++;
    }

    cout << (maxSegment ? maxSegment : 0) << '\n';
}