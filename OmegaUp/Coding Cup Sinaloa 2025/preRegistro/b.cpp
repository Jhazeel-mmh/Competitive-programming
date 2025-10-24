#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  double x, y, z;
  cin >> x >> y >> z;
  double pi = 3.1416;
  double numerador = x + (x * (y + pow(z, 2)));
  double denominador = (x + pi)*(y + pi);
  double res = numerador / denominador;
  cout << fixed << setprecision(6) << res;
  return 0;
}