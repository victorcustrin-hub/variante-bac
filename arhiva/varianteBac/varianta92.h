#pragma once
#include <iostream>
using namespace std;

//3. Subprogramul ordonare primeşte prin parametrul x un tablou unidimensional cu cel mult
//100 de elemente numere reale, iar prin parametrul n un număr întreg ce reprezintă numărul
//efectiv de elemente ale tabloului x.Subprogramul ordonează crescător elementele tabloului
//şi furnizează, tot prin intermediul parametrului x, tabloul ordonat.
//a) Scrieţi numai antetul acestui subprogram. (4p.)

void ordonare(double x[], int n) {
	bool sortat = true;

	do {
		sortat = true;
		for (int i = 0;i < n - 1;i++) {
			if (x[i] > x[i + 1]) {
				double aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				sortat = false;
			}
		}

	} while (sortat == false);

}

//b) Scrieţi un program C / C++ care citeşte de la tastatură două numere naturale, n şi m
//(1≤n≤100 şi m≤n), şi apoi un şir de n numere reale distincte.Folosind apeluri utile ale
//subprogramului ordonare, programul afişează pe prima linie a ecranului, cele mai mari m
//elemente din şirul citit(în ordine crescătoare a valorilor lor), iar pe a doua linie de ecran,
//cele mai mici m elemente din şir(în ordine descrescătoare a valorilor lor).Numerele afişate
//pe aceeaşi linie vor fi separate prin câte un spaţiu. (10p.)
//Exemplu : dacă n = 9, m = 3, iar şirul este(14.2, 60, -7.5, -22, 33.8, 80, 4, 10, 3) se va
//afişa pe ecran : 33.8 60 80 3 - 7.5 - 22

void solutie() {
	double a[100] = { 14.2, 60, -7.5, -22, 33.8, 80, 4, 10, 3 };
	int n = 9;
	int m = 3;

	ordonare(a, n);

	cout << endl;
	for (int i = n-m;i < n;i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = m-1;i >= 0;i--) {
		cout << a[i] << " ";
	}

}