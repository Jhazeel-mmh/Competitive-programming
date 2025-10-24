#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
class SegmentTree{
    public:
    vector <ll> tree;
    void init(int n){
        tree.resize(n*4, 0);
    }
 
    void build(int tl, int tr, int index, vector <ll> &a){
        if (tl == tr){
            tree[index] = a[tl];
        } else {
            int tm = (tl  + tr) / 2;
            build(tl, tm, index * 2, a);
            build(tm + 1, tr, index * 2 + 1, a);
            tree[index] = tree[index * 2] + tree[index * 2 + 1];
        }
    }
 
    void update(int newValue, int tl, int tr, int position, int index){
        if (tl == tr){
            tree[index] = newValue; 
        } else {
            int tm = (tl + tr) / 2;
            if (position <= tm){
                update(newValue, tl, tm, position, index*2);
            } else {
                update(newValue, tm + 1, tr, position, index*2+1);
            }
            tree[index] = tree[index * 2] + tree[index * 2 + 1];
        }
    }
 
    int sum(int index, int tl, int tr, int l, int r){
        if (l > r) return 0;
        if (tl == l && tr == r){
            return tree[index];
        }
 
        int tm = (tr + tl) / 2;
        return sum(index * 2, tl, tm, l, min(r, tm)) + sum(index * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
    }
};
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; 
    cin >> n;
    vector <ll> a(n);
    for (auto &e : a) cin >> e;
 
    SegmentTree ST;
    ST.init(n);
    ST.build(0, n-1, 1, a);
    int q; cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        cout << ST.sum(1, 0, n - 1, a, b);
    }
 
 
    return 0;
}