#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int volumentridemensional[201][201][201];
bool visitado[201][201][201];
long long int contador = 0;


int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  vector <vector <int>> coordenadas(t, vector <int> (6));

  for (int b = 0; b < t; b++){
    int x1, y1, h1, x2, y2, h2;
    cin >> x1 >> y1 >> h1 >> x2 >> y2 >> h2;
    coordenadas[b] = {x1, y1, h1, x2, y2, h2};

    
    for (int i = x1; i < x2; i++){
      for (int j = y1; j < y2; j++){
        for (int k = h1; k < h2; k++){
          volumentridemensional[i + 100][j + 100][k + 100] = 1;
        }
      }
    }
  }


  for (int b = 0; b < t; b++){
    int x1 = coordenadas[b][0];
    int y1 = coordenadas[b][1];
    int h1 = coordenadas[b][2];
    int x2 = coordenadas[b][3];
    int y2 = coordenadas[b][4];
    int h2 = coordenadas[b][5];

    
    for (int i = x1; i < x2; i++){
      for (int j = y1; j < y2; j++){
        for (int k = h1; k < h2; k++){
          if (volumentridemensional[i + 100][j + 100][k + 100] == 1 && 
          visitado[i + 100][j + 100][k + 100] != true){
            contador++;
            visitado[i + 100][j + 100][k + 100] = true;
          }
        }
      }
    }
  } 

  cout << contador << '\n';

  return 0;
}