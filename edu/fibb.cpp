#include <bits/stdc++.h>
using namespace std;

vector <long long> dp(10001, 0);

long long fib(long long n){
    
    if (n <= 2) return 1;

    if (dp[n]) return dp[n];

    return fib(n- 1) + fib(n - 2);  
}


int main(){
    int n;
    cin >> n;  

    cout << fib(n) << endl;
}