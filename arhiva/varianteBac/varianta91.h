#pragma once
#include <iostream>
using namespace std;

//Subprogramul par primeşte prin singurul său parametru, n, un număr natural nenul cu cel
//mult 8 cifre şi returnează valoarea 1 dacă n conţine cel puţin o cifră pară, sau returnează
//valoarea 0 în caz contrar.
//Exemplu: pentru n = 723 subprogramul va returna valoarea 1.
//a) Scrieţi numai antetul subprogramului par. (2p.)

int par(int n) {
	if (n == 0) {
		return 1;
	}

	while (n != 0) {
		int cif = n % 10;
		if (cif % 2 == 0) {
			return 1;
		}
		n = n / 10;
	}
	return 0;
}

//b) Scrieţi un program C / C++ care citeşte de la tastatură un număr natural nenul n cu cel
//mult trei cifre, apoi un şir de n numere naturale, cu cel puţin două şi cel mult 8 cifre fiecare,
//şi afişează pe ecran numărul de valori din şirul citit care au numai cifra unităţilor pară,
//celelalte cifre fiind impare.Se vor utiliza apeluri utile ale subprogramului par.
//Exemplu: dacă n = 4, iar şirul citit este 7354, 123864, 51731, 570 se va afişa 2 (numerele 7354 şi 570 respectă condiţia cerută).

void solutie() {
	int v[100] = {7354,123864,51731,570};
	int n = 4;

	int ct = 0;

	for (int i = 0;i < n;i++) {
		if (par(v[i] % 10) == 1 && par(v[i]/10) == 0) {
			ct++;
		}
	}
	cout << ct;
}