#include <bits/stdc++.h>
#include <queue>

using namespace std;

queue <int> q;

void agrega(int n) {
	// FIXME
	q.push(n);
    return;
}

int saca() {
	// FIXME
	int numero = 0;
	if (q.empty()){
		return -1;
	}
    numero = q.front();
	q.pop();
	return numero;
}


int main(){
    agrega(1);
    agrega(5);
    agrega(18);
    while(!q.empty()){
        cout << saca() << endl;
    }
}