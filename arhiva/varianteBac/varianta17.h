#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III

//Scrieţi definiţia completă a subprogramului interval care are doi parametri a şi n, prin
//care primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici
//decât 1000 şi respectiv numărul efectiv de elemente din tabloul unidimensional.
//Subprogramul returnează numărul de elemente din tabloul unidimensional care aparţin
//intervalului închis determinat de primul şi respectiv ultimul element al tabloului.
int interval(int a[], int n) {
    int ct = 0;

    int primul = a[0];
    int ultimul = a[n - 1];

    int st = primul;
    int dr = ultimul;

    if (primul > ultimul) {
        st = ultimul;
        dr = primul;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] >= st && a[i] <= dr) {
            ct++;
        }
    }

    return ct;
}

void solutie3() {
    int a[101] = { 12,27,6,8,9,2 };
    int n = 6;

    cout << interval(a,n);
}
