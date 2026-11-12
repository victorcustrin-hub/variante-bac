#pragma once
#include <iostream>
using namespace std;

//Scrieţi în C / C++ definiţia completă a subprogramului medie care are doi parametri :
//-n, prin care primeşte un număr natural(1≤n≤100);
//-v, prin care primeşte un tablou unidimensional cu n elemente, numere naturale, fiecare
//element având cel mult patru cifre.
//Subprogramul returnează media aritmetică a elementelor din tablou.

double medie(int n, int v[]) {
	int s = 0;

	for (int i = 0;i < n;i++) {
		s = s + v[i];
	}
	
	return (double)s / n;

}

void solutie() {
	int a[100] = { 123, 122, 423, 555 };
	int n = 4;

	cout << medie(n,a);
}