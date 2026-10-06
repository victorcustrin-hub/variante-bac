#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//3. Funcţia f primeşte prin intermediul parametrului n un număr natural nenul (2≤n≤200), iar
//prin intermediul parametrului a un tablou unidimensional care conţine n valori întregi nenule
//(fiecare dintre aceste valori întregi având cel mult patru cifre).
//Funcţia returnează valoarea - 1 dacă numărul de valori negative din tabloul a este strict mai
//mare decât numărul de valori pozitive din tablou, valoarea 0 dacă numărul de valori
//negative din a este egal cu numărul de valori pozitive din tablou şi valoarea 1 dacă numărul
//de valori pozitive din tabloul a este strict mai mare decât numărul de valori negative din a.
//Scrieţi definiţia completă a funcţiei f.


int f(int n, int a[]) {
	int poz = 0;
	int neg = 0;

	for (int i = 0;i < n;i++) {
		if (a[i] < 0) {
			neg++;
		}
		else if(a[i]>0) {
			poz++;
		}
	}

	if (neg > poz) {
		return -1;
	}

	if (neg == poz) {
		return 0;
	}

	return 1;
}

void solutie() {
	int a[100] = { 2,-4,8,-10,12 };
	int n = 5;

	cout << f(n, a);
}