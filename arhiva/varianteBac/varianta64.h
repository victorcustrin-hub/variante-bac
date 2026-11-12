#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III

//Subprogramul diviz primeşte prin intermediul parametrului n un număr natural nenul
//(2≤n≤200), iar prin intermediul parametrului a, un tablou unidimensional care conţine n
//valori naturale nenule, fiecare dintre acestea având cel mult patru cifre.Elementele tabloului
//sunt numerotate de la 1 la n.
//Subprogramul returnează o valoare egală cu numărul de perechi(a[i], a[j]), 1≤i < j≤n, în
//care ai este divizor al lui a[j], sau a[j] este divizor al lui a[i].

int diviz(int n, int a[]) {
    int ct = 0;

    for (int i = 1;i <= n;i++) {
        for (int j = i + 1;j <= n;j++) {
            if (a[i] % a[j] == 0 || a[j] % a[i] == 0) {
                ct++;
            }
        }
    }
    return ct;
}

void solutie3(){
    int n = 5;
    int a[100] = { 0,4,8,3,9,4 };
    cout << diviz(n, a);

}