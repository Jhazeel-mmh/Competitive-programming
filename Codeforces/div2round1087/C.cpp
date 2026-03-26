#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        bool found = false;

        vector<int> losers;

        for (int i = 3; i <= (2 * n) - 1; i += 2)
        {
            cout << "? " << i << " " << i + 1 << endl;

            int res;
            cin >> res;

            if (res == 1)
            {
                cout << "! " << i << endl;
                found = true;
                break;
            }

            if (res == -1)
                exit(0);
        }

        if (!found)
        {
            cout << "? " << 1 << " " << 3 << endl;

            int res;
            cin >> res;

            if (res == 1)
            {
                cout << "! " << 3 << endl;
                continue;
            }
            if (res == -1)
                exit(0);

            cout << "? " << 1 << " " << 4 << endl;

            cin >> res;

            if (res == 1)
            {
                cout << "! " << 4 << endl;
                continue;
            }
            else
            {
                cout << "! " << 2 << endl;
                continue;
            }

            if (res == -1)
                exit(0);
        }
    }
}