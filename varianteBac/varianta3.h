#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//?? incomplet

//SUBIECTUL III

//Subprogramul cif, cu doi parametri, primeşte prin intermediul parametrului a un număr
//natural cu cel mult 8 cifre şi prin intermediul parametrului b o cifră; subprogramul returnează
//numărul de apariţii ale cifrei b în scrierea numărului a.
//Exemplu: pentru a = 125854 şi b = 5, subprogramul va returna valoarea 2.

//a) Scrieţi definiţia completă a subprogramului cif. (4p.)

//b) Scrieţi un program C / C++ care citeşte de la tastatură un număr natural n cu exact 8 cifre
//şi care determină şi afişează pe ecran, folosind apeluri utile ale subprogramului cif, cel mai
//mare număr palindrom ce poate fi obţinut prin rearanjarea tuturor cifrelor numărului n.Dacă
//nu se poate obţine un palindrom din toate cifrele numărului n, programul va afişa pe ecran
//numărul 0. Un număr natural este palindrom dacă este egal cu numărul obţinut prin scrierea
//cifrelor sale în ordine inversă.
//Exemplu: dacă n = 21523531 atunci se va afişa pe ecran numărul 53211235, iar dacă
//n = 12272351 atunci se va afişa pe ecran numărul 0.

int cif(int a, int b) {
    int ct = 0;

    if (a == 0 && b == 0) {
        return 1;
    }

    while (a > 0) {
        int cif = a % 10;
        if (cif == b) {
            ct++;
        }
        a = a / 10;
    }
    return ct;
}

//n=21523531
//i<=9           0  1  2  3  4  5  6  7  8  9
//9<=9 da        0      
//1<=9 da           2
//2<=9 da              2
//3<=9 da                 2
//4<=9 da                    0
//5<=9 da                       2
//6<=9 da                          0
//7<=9 da                             0
//8<=9 da                                0
//9<=9 da                                   0
//10<=9 nu

//i>=0
void solutie() {
    int n = 21523531;
    int fr[10];
    int cif_impare = 0;

    for (int i = 0; i <= 9; i++) {
        fr[i] = cif(n, i);
        if (fr[i] % 2 != 0) {
            cif_impare++;
        }
    }

    if (cif_impare > 0) {
        cout << 0 << endl;
    }
    //incomplet
}