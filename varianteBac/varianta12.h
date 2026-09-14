#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III


//Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n (n≤20),
//apoi un şir de n numere naturale, având fiecare exact 5 cifre.Dintre cele n numere citite,
//programul determină pe acelea care au toate cifrele egale şi le afişează pe ecran, în ordine
//crescătoare, separate prin câte un spaţiu.

bool cifEgale(int n) {
    int cif = n % 10;
    n= n / 10;

    while (n != 0) {
        if (n % 10 != cif) {
            return false;
        }
        n = n / 10;
    }
    return true;
}

void sort(int v[], int d) {
    bool sortat = true;

    do {
        sortat = true;

        for (int i = 0;i < d - 1;i++) {

            if (v[i] > v[i + 1]) {
                int aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                sortat = false;
            }

        }

    } while (sortat == false);
}

void solutie4() {
    int n = 0;
    int nr = 0;
    int rez[25];
    int ct = 0;

    cout << "n = ";
    cin >> n;

    cout << "introduceti cele " << n << " numere de cate 5 cifre: ";
    for (int i = 0; i < n; i++) {
        cin >> nr;

        if (cifEgale(nr)) {
            rez[ct] = nr;
            ct++;
        }
    }

    sort(rez, ct);

    for (int i = 0; i < ct; i++) {
        cout << rez[i] << " ";
    }
    cout << endl;

}