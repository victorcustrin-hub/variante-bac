#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III

//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤100)
//şi 2 * n numere naturale de maximum 3 cifre; primele n reprezintă elementele tabloului
//unidimensional a, iar următoarele n elementele tabloului unidimensional b; fiecare tablou
//are elementele numerotate începând de la 1. Programul construieste în memorie şi
//afişează pe ecran, cu spaţii între ele, cele n elemente ale unui tablou unidimensional c, în
//care orice element ci(1≤i≤n) se obţine conform definiţiei următoare :
//c[i] = ┌ a[i] concatenat cu b[i], dacă a[i] < b[i]
//    └ b[i] concatenat cu a[i], altfel


int ordin(int nr) {
    int p = 1;
    while (nr != 0) {
        p = p * 10;
        nr = nr / 10;
    }
    return p;
}

void solutie4(){
    int n;
    cin >> n;

    int a[105];
    int b[105];
    int c[105];

    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }

    for (int i = 1;i <= n;i++) {
        cin >> b[i];
    }

    for (int i = 1;i <= n;i++) {
        if (a[i] < b[i]) {
            c[i] = a[i] * ordin(b[i]) + b[i];
        }
        else {
            c[i] = b[i] * ordin(a[i]) + a[i];
        }
    }

    for (int i = 1;i <= n;i++) {
        cout << c[i] << " ";
    }

}