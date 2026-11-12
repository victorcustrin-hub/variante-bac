#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III


//4 a)
//Subprogramul sub returnează numărul componentelor tabloului primit prin intermediul
//parametrului v ale căror valori sunt strict mai mici decât valoarea parametrului a.
//Exemplu: pentru valorile n = 5, v = (1, 21, 9, 21, 403), a = 20 ale parametrilor, în urma
//apelului, subprogramului sub va returna valoarea 2.

int sub(int v[],int n,int a) {
    int ct = 0;

    for (int i = 0;i < n;i++) {
        if (v[i] < a) {
            ct++;
        }
    }
    return ct;
}

void solutie4a() {
    int v[101] = { 1,21,9,21,403 };
    int d = 5;
    int a = 20;

    cout<<sub(v, d, a);
}


//b) Să se scrie un program C/C++ care să citească de la tastatură un număr natural nenul n
//(n≤100)şi n numere întregi, fiecare având cel mult 4 cifre, şi care, folosind apeluri utile ale
//subprogramului sub, să afişeze pe ecran mesajul DA dacă oricare două dintre cele n
//numere întregi citite sunt distincte două câte două, sau mesajul NU în caz contrar.
//Exemplu: pentru n = 6 şi cele n numere citite de la tastatură : 47 183 69 8 134 -56
//se va afişa pe ecran mesajul DA

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

void solutie4b() {
    int n = 0;
    int v[100];

    cout << "n=";
    cin >> n;

    cout << "introduceti cele " << n << " elemente: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v, n);
    bool distincte = true;

    for (int i = 0; i < n; i++) {
        if (sub(v, n, v[i]) != i) {
            distincte = false;
            break;
        }
    }

    if (distincte) {
        cout << "DA" << endl;
    }
    else {
        cout << "NU" << endl;
    }
}


