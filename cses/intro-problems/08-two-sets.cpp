#include <bits/stdc++.h>
using namespace std;

int main(){
    int max_n;
    cin >> max_n;

    vector <int> a;
    vector <int> b;
    a.push_back(max_n);
    long long atotal = max_n, btotal = 0;
    for (int i = max_n - 1; i > 0; i--){
        if (atotal > btotal){
            btotal += i;
            b.push_back(i);
        } else {
            atotal += i;
            a.push_back(i);
        }
    }

    if (atotal != btotal){
        cout << "NO" << '\n';
        return 0;
    }

    cout << "YES" << '\n';
    cout << a.size() << '\n';
    for (int x : a) cout << x << " ";
    cout << '\n';

    cout << b.size() << '\n';
    for (int x : b) cout << x << " ";
    cout << '\n';
}
/*
1 2 3 4 5 6 7

7 4 3
6 5 2 1

*/
