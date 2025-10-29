#include <bits/stdc++.h>
using namespace std;

int n, m;
vector <array<int, 3>> cows;
vector <array <int, 4>> colers;
vector <bool> chosen;
int min_cost = INT32_MAX;

void update(){
    int isOk = true;

    for (int i = 1; i <= 100; i++){

        int cooling = 0;
        for (int j = 0; j < m; j++){
            if (!chosen[j]) continue;
            auto &[a, b, t, m] = colers[j];
            if (a <= i && i <= b) cooling += t;
        }


        int requirements = 0;
        for (int j = 0; j < n; j++){
            auto &[a, b, t] = cows[j];
            if (a <= i && i <= b) {
                requirements = t;
                break;
            }
        }

        if (cooling < requirements){
            isOk = false;
            break;
        }
    }

    if (isOk){
        int cost = 0;
        for (int i = 0; i < m; i++){
            if (chosen[i])
            cost += colers[i][3];
        }

        min_cost = min(min_cost, cost);
    }
}

void search(int index){
   

    if (index == colers.size()){
        update();
        return;
    } else {
        search(index + 1);
        chosen[index] = 1;
        search(index + 1);
        chosen[index] = 0;
    }
}


int main(){
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        int a, b, t;
        cin >> a >> b >> t;
        
        cows.push_back({a, b, t});
    }

    chosen.assign(m, false);

    for (int i = 0; i < m; i++){
        int a, b, t, c;
        cin >> a >> b >> t >> c;
        colers.push_back({a, b, t, c});
    }   

    search(0);

    cout << min_cost << '\n';
}