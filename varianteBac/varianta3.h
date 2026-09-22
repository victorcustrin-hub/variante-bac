#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//??

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


//vector frecventa
void frecventaCif(int f[],int nr) {
    
    while (nr != 0) {
        int cif = nr % 10;
        f[cif]++;
        nr = nr / 10;
    }
  
}

//functie ce verifica daca putem forma un numar palindrom
bool verificareaFormariiPalindrom(int f[]) {
  
    for (int i = 0;i < 10;i++) {
        if (f[i] % 2 != 0) {
            return false;
        }
    }
    return true;

}

//functie ce creeaza un numar palindrom din cifrele altui numar
void numarPalindrom(int nr) {
    int f[10] = {};
    frecventaCif(f, nr);
    if (verificareaFormariiPalindrom(f)) {
        int nou = 0;
        //0 1 2 3 4 5 6 7 8 9
        //2 0 2 0 0 2 0 0 2 0
        //85200258
        for (int i = 9;i >= 0;i--) {
            //de terminat 

        }
    }
}

int cif(long a, int b) {
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

void solutie4() {
    long n = 38517452;
    int f[10]{};

}