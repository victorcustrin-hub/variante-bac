#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//SUBIECTUL III

//3. Scrieţi definiţia completă a unui subprogram P cu doi parametri, care primeşte prin
//   intermediul primului parametru, n, un număr natural nenul(1≤n≤100) şi prin intermediul
//   celui de - al doilea parametru, a, un tablou unidimensional cu elementele numerotate de la 1
//   la n, numere întregi de cel mult 4 cifre fiecare.Subprogramul returnează suma tuturor
//   numerelor impare aflate pe poziţii pare din tablou.
//   Exemplu: dacă n = 6, iar şirul a este format din elementele(3, 12, 7, 1, 4, 3), atunci la apel se
//   va returna 4.

int p(int n, int a[]) {
	int suma = 0;

	for (int i = 0;i < n;i++) {
		if (i % 2 != 0 && a[i] % 2 != 0) {
			suma = suma + a[i];
		}
	}
	return suma;
}

void solutie3() {
	int a[101] = { 3, 12, 7, 1, 4, 3 };
	int n = 6;

	cout << p(n, a);
}


