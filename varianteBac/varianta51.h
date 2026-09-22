#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III


//Fişierul text date.in conţine pe prima linie un număr natural nenul n (n≤100), iar pe a
//doua linie n numere naturale nenule, separate prin câte un spaţiu, fiecare număr având
//maximum 4 cifre.Scrieţi un program C / C++ care citeşte toate numerele din fişierul text
//date.in, construieşte în memorie un tablou unidimensional a, cu cele n elemente din fişier
//şi afişează pe ecran perechile(ai, aj), 1≤i < j≤n, cu proprietatea că elementele fiecăreia
//dintre aceste perechi au aceeaşi paritate.Fiecare pereche se va afişa pe câte o linie a
//ecranului, elementele perechii fiind separate prin câte un spaţiu.În cazul în care nu există
//nicio pereche, se va afişa valoarea 0.

void solutie4(){
    int n = 5;
    int v[100] = { 16,22,3,6,1 };

    bool vf = false;

    for (int i = 0;i < n;i++) {
        for (int j = i + 1;j < n;j++) {
            if (v[i] % 2 == v[j] % 2) {
                cout << v[i] << " " << v[j];
                vf = true;
                cout << endl;
            }
        }
    }
    if (!vf) {
        cout << "0";
    }
}
