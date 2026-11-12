#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III

//Scrieţi definiţia completă a unui subprogram fibo cu doi parametri, n şi v, care primeşte
//prin intermediul parametrului n un număr natural(1 < n < 30) şi returnează prin intermediul
//parametrului v un tablou unidimensional care conţine primii n termeni impari ai şirului lui
//Fibonacci(amintim că şirul lui Fibonacci este : 1, 1, 2, 3, 5, 8, 13, 21, …).

void fibo(int n, int v[]) {
	int ct = 2;
	v[0] = v[1] = 1;

	int a = 1;
	int b = 1;

	int c = 0;
	while (ct < n) {
		c = a + b;
		if (c % 2 != 0) {
			v[ct++] = c;
		}
		a = b;
		b = c;
	}
}


void solutie3() {
	int n, v[30];
	cin >> n;
	fibo(n, v);

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
