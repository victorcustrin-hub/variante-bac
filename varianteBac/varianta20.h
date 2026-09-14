#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//??

//SUBIECTUL III

//Subprogramul nule are doi parametri: a, prin care primeşte un tablou unidimensional cu
//maximum 100 de numere întregi, cu cel mult 4 cifre fiecare şi n, numărul de elemente din
//tablou.Subprogramul rearanjează elementele tabloului unidimensional astfel încât toate
//valorile nule să se afle la sfârşitul tabloului.Ordinea în cadrul secvenţei de elemente nenule
//poate fi oricare.Tabloul modificat este furnizat tot prin parametrul a
void nule(int a[], int n) {
 
    for (int i = 0; i < n - 1; i++) {
        
        for (int j = 0; j < n - i - 1; j++) {

            if (a[j] == 0 && a[j + 1] != 0) {
                int aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }

    for (int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }

}

void solutie3() {
    int a[101] = { 12,0,0,-3,-8,0 };
    int n = 6;

    nule(a,n);
}

