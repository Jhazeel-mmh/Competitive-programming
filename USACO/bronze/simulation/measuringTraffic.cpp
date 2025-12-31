#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool firstHighWayUnit = false;
    int range = 0, lastAHighWay = 0, lastBHighway = 0;
    for (int i = 0; i < n; i++)
    {
        string ramp;
        int a = 0, b = 0;
        cin >> ramp >> a >> b;

        if (ramp == "off")
        {
            range -= max(a, b);
        }
        else if (ramp == "on")
        {
            range += max(a, b);
        }
        else if (ramp == "none")
        {
            range = 0;
            lastAHighWay = a;
            lastBHighway = b;
        }

        if (ramp == "none" && !firstHighWayUnit)
        {
            firstHighWayUnit = true;
            int AA = lastAHighWay + range, BB = lastBHighway + range;
            printf("%d %d\n", (AA + lastAHighWay) / 2, (BB + lastBHighway) / 2);
        }
    }
    int AA = lastAHighWay + range, BB = lastBHighway + range;
    printf("A: [%d %d] [%d %d]", AA, BB, lastAHighWay, lastBHighway);
    printf("%d %d\n", (AA + lastAHighWay) / 2, (BB + lastBHighway) / 2);
}

/*
SAMPLE INPUT:
4
on 2 2
off 1 1
off 5 10
on 12 14
none 10 14
none 11 15
off 2 3
SAMPLE OUTPUT:
10 13
8 12

*/