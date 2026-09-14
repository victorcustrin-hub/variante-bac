#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//??

//SUBIECTUL III

//Subprogramul sub primeşte prin intermediul parametrilor:
//n şi m două numere naturale(1 < n < 100, 1 < m < 100)
//a şi b două tablouri unidimensionale, fiecare având componente numere naturale de
//maximum patru cifre, ordonate crescător; tabloul a conţine n numere pare, iar tabloul b
//conţine m numere impare.
//Subprogramul va afişa pe ecran, în ordine crescătoare, separate prin câte un spaţiu, un şir
//format dintr - un număr maxim de elemente care aparţin cel puţin unuia dintre tablouri, astfel
//încât orice două elemente aflate pe poziţii consecutive să fie de paritate diferită.
void sub(int n, int m, int a[], int b[]) {
    int i = 0;
    int j = 0;

    int ultima_paritate = -1;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    cout << endl;
}

void solutie4() {
    int a[101] = { 2, 4, 8, 10, 14 };
    int b[101] = { 3, 5, 11 };

    sub(5, 3, a, b);
}