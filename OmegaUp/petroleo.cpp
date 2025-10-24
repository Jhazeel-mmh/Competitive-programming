#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);


  int rows = 0, cols = 0, k = 0;
  cin >> rows >> cols >> k;

  vector <vector <char>> espacio(rows, vector <char> (cols));
  int pi = 0, pj = 0;	

  for (int i = 0; i < rows; i++){
	  for (int j = 0; j < cols; j++){
		  cin >> espacio[i][j];
		  if (espacio[i][j] == '$'){
			  pi = i;
			  pj = j;
		  }
	  }
  }
  
  queue <vector <int>> q;
  vector <int> xy = {pi, pj, 0};
  q.push(xy);
  vector <int> icoordenates = {0, 0, -1, 1};
  vector <int> jcoordenates = {-1, 1, 0, 0};

  while (!q.empty()){
    int x = q.front()[0];
    int y = q.front()[1];
    int d = q.front()[2];
    q.pop();

    if (d >= k) continue;

    for (int b = 0; b < 4; b++){
        int bx = x + icoordenates[b];
        int by = y + jcoordenates[b];


        if (bx >= 0 && bx < rows && by >= 0 && by < cols){
            if (espacio[bx][by] == '.'){
                espacio[bx][by] = '*';
                vector <int> act = {bx, by, d + 1};
                q.push(act);
            }
        }

    }

  }
 	
   for (int i = 0; i < rows; i++){
	  for (int j = 0; j < cols; j++){
		  cout << espacio[i][j];
	  }
      cout << endl;
  }
  

  return 0;
}