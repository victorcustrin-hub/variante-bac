#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III


//3.

//Scrieţi definiţia completă a subprogramului shift care primeşte prin intermediul
//parametrului n o valoare naturală nenulă(n≤100), iar prin intermediul parametrului x, un
//tablou unidimensional cu maximum 100 de componente.Fiecare componentă a acestui
//tablou este un număr întreg care are cel mult 4 cifre.Subprogramul permută circular cu o
//poziţie spre stânga primele n elemente ale tabloului x şi furnizează tabloul modificat tot prin
//parametrul x.
//Exemplu: dacă înainte de apel n = 4 şi x = (1, 2, 3, 4), după apel x = (2, 3, 4, 1). (4p.)

//b) Scrieţi un program C / C++ care citeşte de la tastatură o valoare naturală nenulă n
//(n≤100), apoi cele n elemente ale unui tablou unidimensional x.Programul va inversa
//ordinea elementelor tabloului x folosind apeluri utile ale subprogramului shift şi va afişa
//pe ecran, separate prin câte un spaţiu, elementele tabloului rezultat în urma acestei
//prelucrări.
//Exemplu: dacă se citesc pentru n valoarea 5, iar tabloul x este(1, 2, 3, 4, 5) programul
//va determina ca x să devină(5, 4, 3, 2, 1).

void shift(int n, int x[]) {
	int aux = x[0];

	for (int i = 0;i < n;i++) {
		x[i] = x[i + 1];
	}
	x[n - 1] = aux;
}

void solutie3b() {
	int x[101] = { 1,2,3,4,5 };
	int n = 5;

	for (int i = n;i >= 2;i--) {
		shift(i, x);
	}

	for (int i = 0;i < n;i++) {
		cout << x[i] << " ";
	}

}