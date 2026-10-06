#pragma once
#include <iostream>
using namespace std;

//de revazut

//3. Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte
//prin intermediul parametrului n un număr natural nenul(1≤n≤10000), iar prin intermediul
//parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre
//aceste valori având cel mult 9 cifre.Subprogramul returnează numărul de numere prime
//din tablou. (10p.)
//Exemplu: pentru n = 5 şi tabloul unidimensional(12, 37, 43, 6, 71) în urma apelului se va
//returna 3.

int calcul(int n, int a[]) {
	int ct = 0;

	for (int i = 0;i < n;i++) {
		int aux = a[i];
		bool prim = true;

		if (aux < 2) {
			prim = false;
		}
		
		for (int d = 2;d <= aux / 2;d++) {
			if (aux % d == 0) {
				prim = false;
				break;
			}
		}

		if (prim) {
			ct++;
		}

	}

	return ct;
}

void solutie() {
	int a[10001] = { 12,37,43,6,71 };
	int n = 5;

	cout << calcul(n, a);
}