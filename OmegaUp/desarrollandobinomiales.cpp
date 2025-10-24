#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long pascal[51][51];

    for (int i = 0; i <= 50; i++){
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        for (int j = 1; j < i; j++){
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j]; 
        }
    }


/*       0/1/2/3/4  i = 4, j = 3,
      0  1 
      1  1 1 
      2  1 2 1
      3  1 x 3 1
      4  1 x x 4 1

*/
    if (n == 0){
        cout << 1 << endl;
    } else if (n == 1){
        cout << "x+y" << endl;
    } else {
        cout << "x^" << n << "+";
        for (int i = n - 1; i > 0; i--){
            cout << pascal[n][i] << "x";
            if (i != 1){
                cout << "^" << i; 
            }
            cout << "y";
            if ( n - i != 1){
                cout << "^" << n - i;
            }
            cout << "+";
        }
        cout << "y^" << n;
    }
    
}