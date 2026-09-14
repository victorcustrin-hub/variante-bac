#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III

//3. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤100) şi apoi
//cele n elemente, numere naturale cu cel mult 4 cifre fiecare, ale unui tablou unidimensional
//a. Programul afişează pe o linie a ecranului suma celor n elemente ale tabloului, pe
//următoarea linie a ecranului suma primelor n - 1 elemente şi aşa mai departe, astfel încât
//ultima linie afişată să conţină doar primul element al tabloului.

void solutie3() {
    int n = 0;
    int a[101];

    cout << "n=";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << endl;
    for (int k = n; k >= 1; k--) {
        int suma = 0;

        for (int i = 0; i < k; i++) {
            suma = suma + a[i];
        }

        cout << suma << endl;
    }

}

