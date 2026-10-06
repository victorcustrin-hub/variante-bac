#pragma once
#include <iostream>
using namespace std;

//??

//Scrieţi programul C / C++ care citeşte de la tastatură un număr natural n(1≤n≤100), apoi
//un şir de n numere întregi, cu cel mult 2 cifre fiecare, notat a1, a2, a3, …an, apoi un al doilea
//şir de n numere întregi, cu cel mult 2 cifre fiecare, notat b1, b2, b3, …bn.Fiecare şir conţine
//atât valori pare, cât şi impare.Programul afişează pe ecran suma acelor numere impare din
//şirul b care sunt mai mici decât suma tuturor numerelor pare din şirul a.
//Exemplu: pentru n = 4 şi numerele 2, 3, 7, 8 respectiv 44, 3, 1, 8 se afişează valoarea 4
//pentru că numerele 3 şi 1 sunt mai mici decât suma numerelor pare din şirul a, care este 10

void solutie() {
	int n = 4;
	int a[100] = { 2,3,7,8 };
	int b[100] = { 44,3,1,8 };
	int s = 0;
	int s2 = 0;

	for (int i = 0;i < n;i++) {
		if (a[i] % 2 == 0) {
			s = s + a[i];
		}
	}

	for (int i = 0;i < n;i++) {
		if (b[i] % 2 != 0&&b[i]<s) {
			s2 = s2 + b[i];
		}
	}
	cout << s2;
}