#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n = 0, rots = 0;
  cin >> n >> rots;

  vector <int> numeros(n, -1);
  int count = 0;

  for (int i = 0; i < n;i++){
    for (int j = 0; j < n; j++){
      cout << " " << j;
      if (i == 0) numeros[j] = j;
    }
    cout << endl; 
  }

  for (int i = 0; i < n; i++){
    if (count == rots) break;

    for (int j = n - 1; j > 0; j--){
      int tmp = 0;
      tmp = numeros[j];
      numeros[j] = numeros[j - 1];
      numeros[j - 1] = tmp;
    }
    count++;
  }

  cout << endl;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << " " << numeros[j];
    }
    cout << endl; 
  }

  return 0;
}