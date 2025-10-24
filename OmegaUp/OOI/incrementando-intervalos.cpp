#include <bits/stdc++.h>
using namespace std;

int main(){
     int n, m;
     cin >> n >> m;
     vector <int> nums(n, 0);
     vector <int> intervalos(n, 0);

     for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        if (b < n){
          intervalos[b]--;
        }

        intervalos[a]++;          
     }

    int x = 0;
    for (int i = 0; i < n; i++){
      x += intervalos[i];
      cout << x << " ";
    }
    cout << endl;
}

1 2 2 1


/*
4
2
1 4
0 3

1 2 2 1

0 0 0 0
0 1 1 1
1 1 1 0
1 2 2 1

0 0 0 0
0 1 0 0
1 0 0 -1

  1 1 1
  



*/