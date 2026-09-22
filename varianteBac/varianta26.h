#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III

//4.

//a) Scrieţi definiţia completă a subprogramului sterge, care primeşte prin cei 4 parametri v, n, i, j:
//-v, un tablou unidimensional cu maximum 100 de elemente întregi din intervalul[-1000, 1000]
//- n, un număr natural reprezentând numărul de elemente din tabloul v
//- i şi j două valori naturale cu 1≤i≤j≤n
//şi elimină din tabloul v elementele vi, vi + 1, …, vj actualizând valoarea parametrului n.
//Tabloul modificat este furnizat tot prin parametrul v. (6p.)

//b) Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n(1≤n≤100) şi pe
//următoarea linie n numere întregi din intervalul[-1000;1000], separate prin câte un spaţiu.
//Scrieţi un program C / C++ care citeşte din fişierul NUMERE.IN numărul natural n,
//construieşte în memorie un tablou unidimensional v cu cele n numere întregi aflate pe linia a
//doua în fişier şi utilizează apeluri utile ale subprogramului sterge pentru a elimina din
//tablou un număr minim de elemente astfel încât să nu existe două elemente alăturate cu
//aceeaşi valoare.Elementele tabloului obţinut se afişează pe ecran, separate prin câte un
//spaţiu.
//Exemplu: Dacă fişierul NUMERE.IN are conţinutul : 12 10 10 2 2 19 9 9 9 9 15 15 15 atunci se afişează 10 2 19 9 15.

void sterge(int v[], int &n, int i, int j) {
	int sterse = j - i + 1;

	for (int k = j + 1;k <= n;k++) {
		v[k - sterse] = v[k];
	}
	n = n - sterse;

}

void solutie4b() {
	int n = 13;
	int a[101] = { 12, 10, 10, 2, 2, 19, 9, 9, 9, 9, 15, 15, 15 };

	for (int i = 0;i < n;i++) {
		if (a[i] == a[i + 1]) {
			sterge(a, n, i + 1, i + 1);
			i--;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
}