#pragma once
#include <iostream>
using namespace std;

//??

//Fişierul text bac.in conţine cel mult 1000 de numere naturale cu cel mult patru cifre
//fiecare, despărţite prin câte un spaţiu.Scrieţi programul C / C++ care citeşte numerele din
//fişier şi afişează pe ecran, în ordine crescătoare, acele numere din fişier care au toate cifrele
//egale.Dacă fişierul nu conţine niciun astfel de număr, se va afişa pe ecran mesajul NU
//EXISTA.
//Exemplu: dacă fişierul bac.in conţine numerele : 30 44 111 7 25 5 atunci pe ecran
//se va afişa 5 7 44 111.

void solutie() {
	int a[100] = { 30,44,111,7,25,5 };
	int d = 6;
	int vf = -1;

	for (int i = 0;i < d;i++) {
		vf = 1;
		int x = a[i];
		int cif = x % 10;
		x = x / 10;
		while (x != 0) {
			if (x % 10 != cif) {
				vf = 0;
				break;
			}
			x = x / 10;
		}
		if (vf == 1) {
			cout << a[i]<<" ";
		}
	}
	if (vf == -1) {
		cout << "NU EXISTA" << endl;
	}
}