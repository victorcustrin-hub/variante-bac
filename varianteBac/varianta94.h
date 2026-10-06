#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//3. Scrieţi definiţia completă a funcţiei f, care primeşte prin intermediul parametrului n un număr
//natural nenul(2≤n≤200), iar prin intermediul parametrului a un tablou unidimensional care
//conţine n valori întregi, fiecare dintre aceste valori întregi având cel mult patru cifre.Funcţia
//returnează valoarea 1 dacă elementele tabloului formează un şir crescător, valoarea 2 dacă
//elementele tabloului formează un şir descrescător, valoarea 0 dacă elementele tabloului
//formează un şir constant şi valoarea - 1 în rest.

int f(int n, int a[]) {
    int crescator = 1;
    int descrescator = 1;
    int constant = 1;

    for (int i = 0;i < n - 1;i++) {
        if (a[i] < a[i + 1]) {
            descrescator = 0;
            constant = 0;
        }
        else if (a[i] > a[i + 1]) {
            crescator = 0;
            constant = 0;
        }
        else {
            crescator = 0;
            descrescator = 0;
        }
    }

    if (crescator == 1) {
        return 1;
    }
    if (descrescator == 1) {
        return 2;
    }
    if (constant == 1) {
        return 0;
    }
    return -1;
}

void solutie() {
    int a[100] = { 6,5,3,2,1 };
    int n = 5;

    cout << f(n, a);
}