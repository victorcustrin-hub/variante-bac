#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III

//3. Subprogramul f primeşte prin intermediul parametrului n un număr natural nenul (1≤n≤9),
//iar prin intermediul parametrului a, un tablou unidimensional care conţine n valori naturale,
//fiecare dintre acestea reprezentând câte o cifră a unui număr.Astfel, a0 reprezintă cifra
//unităţilor numărului, a1 cifra zecilor etc.
//Subprogramul furnizează prin parametrul k o valoare naturală egală cu numărul obţinut din
//cifrele pare reţinute în tabloul a sau valoarea - 1 dacă în tablou nu există nicio cifră pară.
//Scrieţi definiţia completă a subprogramului f.

int f(int a[], int n,int k) {
	int p = 1;
	k = 0;

	for (int i = n-1;i >= 0;i--) {
		if (a[i] % 2 == 0) {
			
		}
	}

}