#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector <long long> numbers(n);

    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    long long countMoves = 0;
    for (int i = 1; i < n; i++){
        if (numbers[i] < numbers[i-1]){
            countMoves += numbers[i-1] - numbers[i];
            numbers[i] = numbers[i - 1];
        }
    }

    cout << countMoves << '\n';
}