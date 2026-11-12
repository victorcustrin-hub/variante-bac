#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III

// 3. a) Pe prima linie a fişierului bac.in se află un număr natural nenul n(n≤1000), iar pe a
//       doua linie a fişierului se află un şir format din n numere naturale, despărţite prin câte un
//       spaţiu, fiecare număr fiind format din cel mult 4 cifre.Scrieţi un program C / C++ care
//       citeşte numerele din fişier şi care afişează pe ecran mesajul DA dacă elementele pare în şir
//       sunt în ordine crescătoare, iar cele impare sunt în ordine descrescătoare şi mesajul NU în
//       caz contrar.Alegeţi un algoritm eficient ca timp de executare şi spaţiu de memorie utilizat.


void solutie3a() {
	int v[100] = { 10, 1133, 12, 331, 42, 1354, 221, 13 };
	int d = 8;
	int par_precedent = -1;
	int impar_precedent = -1;
	bool vf = true;

	for (int i = 0;i < d;i++) {
		if (v[i] % 2 == 0) {
			if (par_precedent != -1 && v[i] < par_precedent) {
				vf = false;
				break;
			}
			par_precedent = v[i];
		}
		else {
			if (impar_precedent != -1 && v[i] > impar_precedent) {
				vf = false;
				break;
			}
			impar_precedent = v[i];
		}
	}

	if (vf) {
		cout << "DA" << endl;
	}
	else {
		cout << "NU" << endl;
	}

}

