#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III

//Scrieţi definiţia completă a unui subprogram P, cu trei parametri, care primeşte prin
//intermediul primului parametru, a, un tablou unidimensional de cel mult 100 de numere
//întregi, cu cel mult 4 cifre fiecare, prin intermediul celui de - al doilea parametru, n, numărul
//efectiv de elemente ale tabloului, iar prin parametrul k, un număr natural(k < 101) şi
//returnează cea mai mare sumă cu k termeni care se poate obţine adunând k elemente ale tabloului.
//Exemplu: dacă n = 6 şi k = 4, iar şirul este format din elementele(5, 2, 5, 4, 1, 3),
//atunci la apel se va returna 17.

int p(int a[], int n,int k) {
	bool sortat = true;

	do {
		sortat = true;
		for (int i = 0;i < n - 1;i++) {
			if (a[i] < a[i + 1]) {
				int aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
				sortat = false;
			}
		}
	}while(sortat == false);

	int suma = 0;
	for (int i = 0;i < k;i++) {
		suma = suma + a[i];
	}
	return suma;
}

void solutie3() {
	int a[101] = { 5,2,5,4,1,3 };
	int n = 6;
	int k = 4;

	cout << p(a, n, k);
}

