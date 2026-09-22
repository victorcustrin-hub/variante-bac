#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//??

//SUBIECTUL III

// 4. Subprogramul f, cu un parametru:
//-primeşte prin intermediul parametrului a un număr natural cu cel mult 8 cifre(a > 1)
//- returnează cel mai mic divizor prim al valorii parametrului a.
//Exemplu: pentru valoarea 45 a parametrului a, subprogramul va returna valoarea 3
//deoarece a = 32
//* 5, iar cel mai mic divizor prim al său este 3.
//a) Scrieţi definiţia completă a subprogramului f. (4p.)

//b) Scrieţi un program C / C++ care să citească de la tastatură un număr natural nenul n
//(n≤100) şi apoi un şir de n numere naturale de cel mult 8 cifre fiecare, toate numerele din
//şir fiind strict mai mari decât 1. Folosind apeluri utile ale subprogramului f, programul va
//determina şi va afişa pe ecran toate numerele prime din şirul citit.Numerele determinate se
//vor afişa pe ecran, separate prin câte un spaţiu, în ordine crescătoare a valorii lor.Dacă nu
//există astfel de numere se va afişa pe ecran mesajul NU EXISTA.
//Exemplu: pentru n = 7, şirul : 1125, 2, 314, 101, 37, 225, 12 pe ecran se va afişa :
//2 37 101

int f(long a) {
    for (int d = 2; d * d <= a; d++) {
        if (a % d == 0) {
            return d;
        }
    }
    return a;
}


void solutie4() {
    int n = 0;
    int x = 0;
    int prime[100];
    int ct_prime = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (f(x) == x) {
            prime[ct_prime] = x;
            ct_prime++;
        }
    }

    if (ct_prime == 0) {
        cout << "nu exista numere prime";
    }else {
        for (int i = 0; i < ct_prime - 1; i++) {
            for (int j = i + 1; j < ct_prime; j++) {
                if (prime[i] > prime[j]) {
                    long aux = prime[i];
                    prime[i] = prime[j];
                    prime[j] = aux;
                }
            }
        }

        for (int i = 0; i < ct_prime; i++) {
            cout << prime[i] << " ";
        }
    }
}

