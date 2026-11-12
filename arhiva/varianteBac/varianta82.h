#pragma once
#include <iostream>
using namespace std;

//Scrieţi în C/C++ definiţia completă a subprogramului suma care are doi parametri:
//-n, prin care primeşte un număr natural(1≤n≤100);
//-v, prin care primeşte un tablou unidimensional cu n elemente, numere întregi situate în
//intervalul[10, 30000].Funcţia returnează suma numerelor din tabloul v care au ultimele
//două cifre identice.
//Exemplu: dacă n = 4 şi v = (123, 122, 423, 555) funcţia va returna 677 (= 122 + 555)

int suma(int n, int v[]) {
	int s = 0;

	for (int i = 0;i < n;i++) {
		int ultima = v[i] % 10;
		int penultima = (v[i] / 10) % 10;

		if (ultima == penultima) {
			s = s + v[i];
		}
	}
	return s;
}

void solutie() {
	int a[100] = { 123, 122, 423, 555 };
	int n = 4;

	cout << suma(n, a);
}