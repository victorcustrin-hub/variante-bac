#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III

//Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte
//prin intermediul parametrului n un număr natural nenul(1≤n≤10000), iar prin intermediul
//parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre
//aceste valori având cel mult 9 cifre.Subprogramul returnează cel mai mare divizor comun
//al elementelor tabloului a

int calcul(int n, int a[]) {
    int d = a[0];

    for (int i = 1;i < n;i++) {
        int x = d;
        int y = a[i];

        while (y != 0) {
            int r = x % y;
            x = y;
            y = r;
        }
        d = x;
    }
    return d;
}


void solutie3(){
    int n = 5;
    int a[100] = { 12,36,48,6,60 };

    cout << calcul(n, a);
}
