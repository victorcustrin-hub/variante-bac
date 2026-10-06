#pragma once
#include <iostream>
using namespace std;

//Fişierul text bac.txt conţine cel puţin două şi cel mult 1000 de numere naturale distincte,
//dintre care cel puţin două sunt pare.Numerele sunt separate prin câte un spaţiu şi fiecare
//dintre ele are cel mult 9 cifre.

//a) Scrieţi un program C / C++ care determină cele mai mari două numere pare din fişier,
//utilizând un algoritm eficient din punct de vedere al timpului de executare şi al spaţiului de
//memorie utilizat.Cele două numere vor fi afişate pe ecran, în ordine descrescătoare,
//separate printr - un spaţiu.
//Exemplu: dacă fişierul conţine numerele : 5123 8 6 12 3 se va afişa : 12 8 (6p.)

void solutie() {
	int v[100] = { 5123,8,6,12,3 };
	int d = 5;
	int max = -1;
	int max2 = -1;

	for (int i = 0;i < d;i++) {
		if (v[i]%2==0) {
			if (v[i] > max) {
				max2 = max;
				max = v[i];
			}
			else if (v[i] > max2) {
				max2 = v[i];
			}
		}
	}

	cout << max << " " << max2 << endl;
}

//b) Descrieţi succint, în limbaj natural, algoritmul utilizat, justificând eficienţa acestuia. (4p.)