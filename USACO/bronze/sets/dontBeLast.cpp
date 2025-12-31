#include <bits/stdc++.h>
using namespace std;
void setIO(string name = "")
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    if (name.size())
    {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main()
{
    setIO("notlast");
    int q;
    cin >> q;
    vector<string> x = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    map<string, int> cows;
    for (auto cow : x)
    {
        cows[cow] = 0;
    }

    int minimal = INT32_MAX;

    for (int i = 0; i < q; i++)
    {
        string c;
        int m;
        cin >> c >> m;
        cows[c] += m;
    }
    for (auto cow : cows)
    {
        minimal = min(minimal, cow.second);
    }

    int secondMinimal = INT32_MAX;
    string secondCow;
    for (auto cow : cows)
    {
        if (cow.second > minimal)
        {
            if (cow.second == secondMinimal)
            {
                cout << "Tie" << endl;
                return 0;
            }

            if (secondMinimal > cow.second)
            {
                secondCow = cow.first;
                secondMinimal = cow.second;
            }
        }
    }

    if (secondMinimal == INT32_MAX)
    {
        cout << "Tie" << endl;
        return 0;
    }
    cout << secondCow << '\n';
}