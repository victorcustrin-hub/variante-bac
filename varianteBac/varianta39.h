#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III


//Pe prima linie a fişierului bac.in se află un număr natural nenul n(n≤1000), iar pe a
//doua linie a fişierului se află un şir format din n numere naturale, despărţite prin câte un
//spaţiu, fiecare număr fiind format din cel mult 4 cifre.Scrieţi un program C / C++ care
//citeşte valorile din fişier şi care afişează pe ecran mesajul DA dacă toate elementele pare
//din şir sunt în ordine crescătoare şi mesajul NU în caz contrar
void solutie3() {
    int n = 0;
    int x = 0;
    int ultimul_par = -1;
    bool cresc = true;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x % 2 == 0) {
            if (ultimul_par != -1 && x < ultimul_par) {
                cresc = false;
            }
            ultimul_par = x;
        }
    }

    if (cresc) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }

}