#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III


//Scrieţi definiţia completă a subprogramului multiplu care are 3 parametri: a, prin care
//primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici decât
//1000, n, numărul efectiv de elemente ale tabloului şi k, un număr natural(k≤9).
//Subprogramul returnează numărul de elemente din tablou care sunt multipli ai numărului k
//şi au ultima cifră egală cu k.
int multiplu(int a[], int n, int k) {
    int ct = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % k == 0 && a[i] % 10 == k) {
            ct++;
        }
    }

    return ct;
}

void solutie3() {
    int a[101] = { 9,273,63,83,93,123 };
    int n = 6;
    int k = 3;

    cout << multiplu(a, n, k);
}