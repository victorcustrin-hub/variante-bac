#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III

//Subprogramul aranjare are doi parametri : a prin care primeşte un tablou unidimensional
//cu maximum 100 de numere reale nenule şi n, numărul de elemente din tablou.
//Subprogramul rearanjează elementele tabloului unidimensional astfel încât toate valorile
//negative să se afle pe primele poziţii, iar valorile pozitive în continuarea celor negative.
//Ordinea în cadrul secvenţei de elemente pozitive, respectiv în cadrul secvenţei de elemente
//negative, poate fi oricare.Tabloul modificat va fi furnizat tot prin intermediul parametrului a.
//Exemplu : dacă tabloul are 6 elemente şi este de forma(12, -7.5, 6.5, -3, -8, 7.5), 
//după apel, acesta ar putea fi : (-7.5, -3, -8, 12, 6.5, 7.5).
//Scrieţi definiţia completă a subprogramului aranjare

void aranjare(double a[], int n) {
	bool sortare = true;

	do {
		sortare = true;
		for (int i = 0;i < n - 1;i++) {
			if (a[i] >= 0 && a[i + 1] < 0) {
				double aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
				sortare = false;
			}
		}

	} while (sortare == false);

}

void solutie3() {
	double a[101] = { 12, -7.5, 6.5, -3, -8, 7.5 };
	int n = 6;

    aranjare(a, n);

	for (int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
}