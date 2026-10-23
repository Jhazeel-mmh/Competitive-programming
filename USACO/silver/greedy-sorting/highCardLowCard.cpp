#include <bits/stdc++.h>
using namespace std;
void setIO(string name)
{
    string inp = name + ".in";
    string out = name + ".out";
    freopen(inp.data(), "r", stdin);
    freopen(out.data(), "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
}


int main()
{
    setIO("cardgame");
    int n; cin >> n;
    vector <int> elsieLow, elsieUpper;
    set <int> elsieHas;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (i < n / 2){ 
            elsieLow.push_back(x);
        } else {    
            elsieUpper.push_back(x);
        }
        elsieHas.insert(x);
    }

    multiset <int> bessieLow, bessieUpper;

    vector <int> bessieHas;

    for (int i = 1; i <= 2*n; i++){
        if (!elsieHas.count(i)){
            bessieHas.push_back(i);      
        }
    }
    sort(bessieHas.begin(), bessieHas.end());

    for (int i = 0; i < n; i++){
        if (i < n / 2){ 
            bessieUpper.insert(bessieHas[i]);
        } else {    
            bessieLow.insert(bessieHas[i]);
        }
    }
    



    sort(elsieLow.begin(), elsieLow.end());
    sort(elsieUpper.begin(), elsieUpper.end());
    // sort(bessieLow.begin(), bessieLow.end());
    // sort(bessieUpper.begin(), bessieUpper.end());

    int pts = 0;
    for (int i = 0; i < elsieLow.size(); i++){
        auto it = bessieLow.upper_bound(elsieLow[i]);
        if (it != bessieLow.end()){
            pts++;
            bessieLow.erase(it);
        } else {
            bessieLow.erase(bessieLow.begin());
        }
    }


    for (int i = 0; i < elsieUpper.size(); i++){
        auto it = bessieUpper.lower_bound(elsieUpper[i]);
        if (it != bessieUpper.begin()){
            pts++;
            it--;
            bessieUpper.erase(it);
        } else {
            auto aux = bessieUpper.end();
            aux--;
            bessieUpper.erase(aux);
        }
    }
    cout << pts << endl;
}

