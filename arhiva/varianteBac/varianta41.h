#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//SUBIECTUL III


//3. Scrieţi un subprogram DIST, cu doi parametri, care primeşte prin intermediul parametrului a
//   un tablou unidimensional cu cel mult 100 de elemente, numere naturale de cel mult 4 cifre
//   fiecare, şi prin intermediul parametrului n un număr natural nenul, n < 100, ce reprezintă
//   numărul de elemente din tablou. Subprogramul returnează valoarea 1 dacă toate
//   elementele tabloului a sunt distincte şi dacă diferenţa absolută a oricăror două elemente
//   vecine din tablou este diferită de 1, altfel returnând valoarea 0.

int DIST(int a[], int n) {
    
    for (int i = 0; i < n - 1; i++) {
       
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                return 0;
            }
        }

        if (a[i] - a[i + 1] == 1 || a[i] - a[i + 1] == -1) {
            return 0;
        }

    }
    return 1;
}

void solutie3() {
    int a[101] = { 23,44,76,26,65 };
    int n = 5;

    cout << DIST(a, n);
}
