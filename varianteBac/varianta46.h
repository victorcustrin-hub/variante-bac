#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III

//Fişierul bac.txt conţine pe prima linie un număr natural n(n≤100), iar pe a doua linie,
//separate prin câte un spaţiu, n numere naturale nenule, cu cel mult 4 cifre fiecare.Scrieţi
//programul C / C++ care citeşte de la tastatură un număr natural k(k≤25), construieşte în
//memorie şi afişează pe ecran un tablou unidimensional ce conţine, în ordinea în care au
//fost citite, numerele de pe a doua linie a fişierului bac.txt care au cel puţin k divizori.

void solutie3(){
    int n = 6;
    int v[100] = { 100, 9, 400, 56, 7, 10 };
    int k = 5;

    for (int i = 0;i < n;i++) {
        int ct = 0;

        for (int j = 1;j <= v[i];j++) {
            if (v[i] % j == 0) {
                ct++;
            }

        }

        if (ct >= k) {
            cout << v[i] << " ";
        }
    }
}