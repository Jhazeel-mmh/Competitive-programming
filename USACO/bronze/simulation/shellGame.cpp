#include <bits/stdc++.h>
using namespace std;
void setIO()
{
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
}

int main(){
    setIO();
    int n;
    cin >> n;
    vector<vector<int>> shell(3, vector<int>(4, 0));
    for (int i = 0; i < 3; i++)
    {
        shell[i][i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        int a, b, guess;
        cin >> a >> b >> guess;

        for (int i = 0; i < 3; i++)
        {
            swap(shell[i][a - 1], shell[i][b - 1]);

            if (shell[i][guess - 1] == 1)
            {
                shell[i][3]++;
            }
        }
    }
    int res = max({shell[0][3], shell[1][3], shell[2][3]});
    cout << res << '\n';
}