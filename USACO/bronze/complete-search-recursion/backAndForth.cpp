#include <bits/stdc++.h>
using namespace std;

set <int> solutions;

void usaco(string name){
    string inp = name + ".in";
    string out = name + ".out";
    freopen(inp.data(), "r", stdin);
	freopen(out.data(), "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
}

void search(int sum1, int sum2, vector <int> A, vector <int> B, int y){
    if (y == 4){
        solutions.insert(sum1);
    } else {
        if (y & 1){ // impar
            swap(sum1, sum2);
            swap(A, B);
        } 
        for (int i = 0; i < A.size(); i++){
                int tmp = A[i];
                vector <int> tmpA(A.begin(), A.end()),
                tmpB(B.begin(), B.end());

                tmpB.push_back(tmp);
                tmpA.erase(tmpA.begin()+i);
                search(sum1-tmp, sum2+tmp, tmpA, tmpB, y+1);
        }
    }
}

int main(){
    usaco("backforth");
    vector <int> A(10, 0), B(10, 0);
    for (auto &e: A) cin >> e;
    for (auto &e: B) cin >> e;

    search(1000, 1000, A, B, 0);

    cout << solutions.size() << endl;
}

/*
2 5
2

1000 1000

 5
2 3
998 10002


*/