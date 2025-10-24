#include <bits/stdc++.h>
using namespace std;

vector <int> letters(26, 0);

int main(){
    string entrada;
    cin >> entrada;

    for (char l: entrada){
        letters[l - 'A']++;
    }

    int oddNumbers = 0;
    for (int i = 0; i < 26; i++){
        if (letters[i] % 2 != 0){
            oddNumbers++;
        }
    }

    if (oddNumbers > 1){
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    string palabra = entrada;
    int pointA = 0, pointB = entrada.size() - 1;
    int oddLetter = -1, oddLettersQ = 0;

    for (int i = 0; i < 26; i++){
        if (letters[i] % 2 == 0 && letters[i] > 0){
            for (int j = 0; j < letters[i]; j += 2){
                palabra[pointA++] = (char) i + 'A';
                palabra[pointB--] = (char) i + 'A';
            }
        } else if (letters[i] % 2 != 0 && letters[i] > 0) {
            oddLetter = i;
            oddLettersQ = letters[i];
        }
    }

    for (int i = 0; i < oddLettersQ; i++){
        palabra[pointA++] = (char) oddLetter + 'A';
    }
    cout << palabra << '\n';
}