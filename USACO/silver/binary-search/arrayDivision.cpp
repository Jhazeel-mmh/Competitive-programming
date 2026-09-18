#include <bits/stdc++.h>
using namespace std;

bool is_possible(const vector <long long> &a, long long &k, long long &m){
    long long currSum = 0;
    long long subsegmentCnt = 0;
    for (auto &e : a){

        if (e > m) return false;

        if (currSum + e > m){
            subsegmentCnt++;
            currSum = 0;
        } 
        currSum += e;
        
    }

    if (currSum > 0) subsegmentCnt++; 
    return subsegmentCnt <= k;
}

int main() {
    long long n, k;
    cin >> n >> k;
    vector <long long> a(n);
    for(auto &x: a) cin >> x;
    
    long long l = *max_element(a.begin(), a.end());
    long long r = accumulate(a.begin(), a.end(), 0LL);

    while (l < r) {
		long long mid = (l + r) / 2;
		if (is_possible(a, k, mid)) {
			r = mid;
		} else {
			l = mid + 1;
		}
	}
    cout << l << endl;
}   