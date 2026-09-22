#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III

//Subprogramul mult, cu doi parametri, primeşte prin intermediul primului parametru, n, un
//număr natural nenul cu maximum trei cifre şi prin intermediul celui de - al doilea parametru,
//a, un tablou unidimensional având n componente numere naturale cu cel mult 8 cifre
//fiecare.Subprogramul returnează valoarea true dacă cele n componente ale lui a pot
//forma o mulţime şi returnează false în caz contrar.

bool mult(int n, int a[]) {
	for (int i = 0;i < n - 1;i++) {
		for (int j = i + 1;j < n;j++) {
			if (a[i] == a[j]) {
				return false;
			}
		}
	}
	return true;
}

//Fişierul text date.in conţine cel mult 400 de numere naturale având maximum 8 cifre
//fiecare.Scrieţi un program C / C++ care, folosind apeluri utile ale subprogramului mult,
//afişează pe ecran valoarea maximă k, astfel încât primele k numere succesive din fişier să
//poată forma o mulţime.

void solutie3b() {
	int a[101] = { 16,17,8,31,8,2,10 };
	int d = 7;
	int k = 0;

	for (int i = 0;i < d;i++) {
		if (mult(i, a)) {
			k = i;
		}
		else {
			break;
		}
	}
	cout << k;
}