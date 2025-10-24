#include <bits/stdc++.h>

using namespace std;

long long maxcd(long long a, long long b){
    
    int mcd = 0;
    while (!mcd){
        if (b % a == 0){
            mcd = a;
        }

        int tmp = b % a;
        b = a;
        a = tmp;
    }
    return mcd;
}

int main(){
    int n;
    cin >> n;

    while (n--){
        long long a, b, mcd;
        cin >> a >> b;
        mcd = maxcd(a, b);
        cin.ignore();

        cout << a / mcd << " " <<  b / mcd << endl;
    }
}