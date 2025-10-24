#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll INF = 1e9 + 10; 
class SegmentTree{
    public:
    vector <ll> tree;
    void init(int n){
        tree.resize(n*4, INF);
    }
 
    void build(int tl, int tr, int index, vector <ll> &a){
        if (tl == tr){
            tree[index] = a[tl];
        } else {
            int tm = (tl  + tr) / 2;
            build(tl, tm, index * 2, a);
            build(tm + 1, tr, index * 2 + 1, a);
            tree[index] = min(tree[index * 2], tree[index * 2 + 1]);
        }
    }
 
    void update(ll newValue, int tl, int tr, int position, int index){
        if (tl == tr){
            tree[index] = newValue; 
        } else {
            int tm = (tl + tr) / 2;
            if (position <= tm){
                update(newValue, tl, tm, position, index*2);
            } else {
                update(newValue, tm + 1, tr, position, index*2+1);
            }
            tree[index] = min(tree[index * 2], tree[index * 2 + 1]);
        }
    }
 
    ll sum(int index, int tl, int tr, int l, int r){
        if (l > r) return INF;
        if (tl == l && tr == r){
            return tree[index];
        }
 
        int tm = (tr + tl) / 2;
        return min(sum(index * 2, tl, tm, l, min(r, tm)), sum(index * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q; 
    cin >> n >> q;
    vector <ll> a(n);
    for (auto &e : a) cin >> e;

    SegmentTree ST;
    ST.init(n);
    ST.build(0, n-1, 1, a);


    for (int i = 0; i < q; i++){
        int a; cin >> a;
        if (a == 1){
            int pos, v;
            cin >> pos >> v;
            ST.update(v, 0, n-1, pos-1, 1);
        } 
         if (a == 2) {
            int l, r;
            cin >> l >> r;
            cout << ST.sum(1, 0, n-1, l-1,r-1) << '\n';
        }
        
    }

    return 0;
}