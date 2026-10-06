#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//3. Scrieţi în C / C++ definiţia completă a subprogramului suma care are doi parametri :
//-n, prin care primeşte un număr natural(1≤n≤100);
//-v, prin care primeşte un tablou unidimensional cu n elemente, numere întregi, fiecare
//având exact trei cifre.
//Funcţia returnează suma elementelor din tablou care au prima cifră egală cu ultima cifră

int suma(int n, int v[]) {
    int s = 0;

    for (int i = 0;i < n;i++) {
        int nr = abs(v[i]);
        int ultima = nr % 10;
        int prima = nr / 100;

        if (prima == ultima) {
            s = s + v[i];
        }

    }

    return s;

}

void solutie() {
    int a[100] = { 265,717,232,312,191 };
    int n = 5;

    cout << suma(n, a);
}