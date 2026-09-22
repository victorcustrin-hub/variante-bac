#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III

//Scrieţi definiţia completă a subprogramului count care are doi parametri, a şi n, prin care
//primeşte un tablou unidimensional cu maximum 100 de numere reale şi respectiv numărul
//efectiv de elemente din tablou.Subprogramul returnează numărul de elemente din tabloul a
//care sunt mai mari sau cel puţin egale cu media aritmetică a tuturor elementelor din tablou.
//Exemplu: dacă tabloul are 6 elemente şi este de forma(12, 7.5, 6.5, 3, 8.5, 7.5),
//subprogramul va returna valoarea 4 (deoarece media tuturor elementelor este 7.5 şi
//numerele subliniate sunt cel puţin egale cu această medie).


int count(double a[], int n) {
	double suma = 0;

	for (int i = 0;i < n;i++) {
		suma = suma + a[i];
	}

	double medie = suma / n;
	int ct = 0;

	for (int i = 0;i < n;i++) {
		if (a[i] >= medie) {
			ct++;
		}
	}
	return ct;
}

void solutie3() {
	double a[101] = { 12, 7.5, 6.5, 3, 8.5, 7.5 };
	int n = 6;

	cout << count(a, n);
}