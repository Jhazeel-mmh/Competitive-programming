#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &e : a)
            cin >> e;

        sort(a.begin(), a.end()); // ordenamos

        a.erase(unique(a.begin(), a.end()), a.end()); // eliminamos duplicados

        int best = 0, current = 0;
        // best: segmento contiguo mas grande de una sucesion (ej 1, 2, 3)
        // current: se usa para ir midiendo cada segmento de elementos sucesivos de nuestro array

        int size = a.size(); // tamaño del array nuevo sin duplicados
        for (int i = 0; i < size; i++)
        {
            if (i == 0 || a[i] != a[i - 1] + 1) // reinicia el calculo de un segmento de elementos sucesivos
                current = 0;

            current++;                 // continua midiendo el tamaño de un segmento sucesivo
            best = max(best, current); // actualiza la respuesta
        }
        cout << best << endl;
    }
}