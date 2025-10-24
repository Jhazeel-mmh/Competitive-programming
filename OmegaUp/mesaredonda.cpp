#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int numeroDeNinos = 0, avance = 0;
  cin >> numeroDeNinos >> avance;

  vector <int> ninos;

  if (avance < 1 || numeroDeNinos < 1 || avance > 1000 || numeroDeNinos > 1000){
    cout << 0 << endl;
    return 0;
  }

  for (int i = 0; i < numeroDeNinos; i++){
    ninos.push_back(i);
  }

  int posi = 0, contador = 0;
  while (!ninos.empty()){
    if (posi + avance < numeroDeNinos){
      posi += avance;

    } else {
      posi = (posi + avance) - numeroDeNinos;
    }



    if (ninos[posi] == 0){
      cout << contador << endl;
      return 0;
    } else {
        ninos.erase(ninos.begin() + posi);
      contador++;
    }
  }

  cout << contador << endl;

  return 0;
}