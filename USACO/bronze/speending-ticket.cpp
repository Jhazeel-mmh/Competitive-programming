#include <bits/stdc++.h>
using namespace std;

void usaco(string name){
    string inp = name + ".in";
    string out = name + ".out";
    freopen(inp.data(), "r", stdin);
	freopen(out.data(), "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
}

int main(){
    usaco("speeding");
    int n, m;
    cin >> n >> m;

    vector <pair <int, int>> roadSegments(n);
    vector <pair <int, int>> bessie(m);

    for (auto &e : roadSegments) cin >> e.first >> e.second;
    for (auto &e : bessie) cin >> e.first >> e.second;

    int maximumSpeedInfraction = 0;
    int i = 0, j = 0;
    int currSegment = roadSegments[0].first, 
        currSpeed = roadSegments[0].second;

    int bessieSeg = bessie[0].first, 
        bessieSpeed = bessie[0].second;
    while (i < n || j < m){
        
        maximumSpeedInfraction = max(maximumSpeedInfraction, bessieSpeed - currSpeed);

        if (bessieSeg == currSegment){
            i++;
            j++;
            currSegment = roadSegments[i].first, 
            currSpeed = roadSegments[i].second;
            bessieSeg = bessie[j].first, 
            bessieSpeed = bessie[j].second;

        } else if (bessieSeg < currSegment){
            currSegment -= bessieSeg;
            j++;
            bessieSeg = bessie[j].first, 
            bessieSpeed = bessie[j].second;
        } else if (bessieSeg > currSegment){
            bessieSeg -= currSegment;
            i++;
            currSegment = roadSegments[i].first, 
            currSpeed = roadSegments[i].second;
        }
    }

    cout << maximumSpeedInfraction << '\n';
}