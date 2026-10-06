#pragma once
#include <iostream>
using namespace std;


//3. Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (1≤n≤99), impar, şi
//construieşte în memorie un tablou unidimensional A = (A1, A2, …, An) cu elementele
//mulţimii{ 1,2,...,n } astfel încât elementele de pe poziţii impare formează şirul crescător
//1, 2, ..., [(n + 1) / 2], iar elementele de pe poziţii pare şirul descrescător n, n - 1, ...,
//[(n + 1) / 2] + 1.

void solutie() {
	int n = 11;
	int aux = n;
	int ct = 1;
	int A[100];

	for (int i = 1;i <= n;i++) {
		if (i % 2 == 0) {
			A[i] = aux;
			aux--;
		}
		else {
			A[i] = ct;
			ct++;
		}
	}

	for (int i = 1;i <= n;i++) {
		cout << A[i] << " ";
	}
}