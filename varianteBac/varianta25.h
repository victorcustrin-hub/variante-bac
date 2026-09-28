#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III

//3. Subprogramul f primeşte prin intermediul parametrului n un număr natural nenul (1≤n≤9),
//iar prin intermediul parametrului a, un tablou unidimensional care conţine n valori naturale,
//fiecare dintre acestea reprezentând câte o cifră a unui număr.Astfel, a0 reprezintă cifra
//unităţilor numărului, a1 cifra zecilor etc.
//Subprogramul furnizează prin parametrul k o valoare naturală egală cu numărul obţinut din
//cifrele pare reţinute în tabloul a sau valoarea - 1 dacă în tablou nu există nicio cifră pară.
//Scrieţi definiţia completă a subprogramului f.

void f(int n, int a[], int& k) {
    k = 0;
    bool gasit = false;

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] % 2 == 0) {
            k = k * 10 + a[i];
            gasit = true;
        }
    }

    if (gasit==false) {
        k = -1;
    }
}

void solutie() {
    int a[100] = { 5,4,3,2 };
    int d = 4;
    int k = 0;

    f(d, a, k);
    cout << k << endl;

}