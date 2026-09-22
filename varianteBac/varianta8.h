#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//??

//SUBIECTUL III

//Subprogramul sub primeşte prin intermediul parametrilor:
//n şi m două numere naturale(1 < n < 100, 1 < m < 100)
//a şi b două tablouri unidimensionale, fiecare având componente numere naturale de
//maximum patru cifre, ordonate crescător; tabloul a conţine n numere pare, iar tabloul b
//conţine m numere impare.
//Subprogramul va afişa pe ecran, în ordine crescătoare, separate prin câte un spaţiu, un şir
//format dintr - un număr maxim de elemente care aparţin cel puţin unuia dintre tablouri, astfel
//încât orice două elemente aflate pe poziţii consecutive să fie de paritate diferită.


void sub(int n, int m, int a[], int b[]) {
	int j = 0;

	int paritate = -1;
	int i = 0;



	cout << endl;
}
//functie de sortare

void sortare(int v[], int dim) {
	bool sortat = true;

	do {
		sortat = true;
		for (int i = 0;i < dim - 1;i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}
		}
	} while (sortat == false);

}


//functie de interclasare a doi vectori soratati 
// a={12,24,26,28,34}      b={3,9,13,21,27,39,53}


//                                                 0  1  2  3  4  5  6  7  8  9   10  11
//i<dimA && j<dimB      a[i]<b[j]                  0  9  0  0  0  0  0  0  0  0   0   0     dimC
//  0<5,0<7             12<3 fals                  3                                         1
//  0<5,1<7             12<9 fals                     9                                      2
//  0<5,2<7             12<13 adev                       12   
//  1<5,2<7             24<13 fals                          13                                 
//  1<5,3<7             24<21 FALS                             21
//  1<5,4<7             24<27 adev                                24
//  2<5,4<7             26<27 adev                                   26
//  3<5,4<7             28<27 fals                                      27
//  3<5,5<7             28<39 adev                                         28
//  4<5,5<7             34<39 adev                                            34  
//  5<5 fals    



// a={2,4,8,10,14}      b={3,5,11}
// c[0]=2, i=1, dimC=1 (pana la primul while)

//                                            0  1  2  3  4  5  6  7  8  9   10  11       i   j       dimcC
//                                            0  0  0  0  0  0  0  0  0  0   0   0                                  
//  i<dimA && j<dimB                          2          
//  1<5&&0<3 ADEVARAT                            3                                        1   0         2
//  1<5&&0<3 ADEVARAT                               4                                     2   0         3
//  2<5%%0<3 ADEVARAT                                  3                                  2   1         4

void interclasare(int a[], int dimA, int b[], int dimB, int c[], int& dimC) {
	int i = 0;
	int j = 0;
	
	if (a[i] > b[j]) {
		c[dimC] = b[j];
		j++;

	} else {
		c[dimC] = a[i];
		i++;
	}

	dimC++;

	while (i < dimA && j < dimB) {

		if (c[dimC - 1] % 2==0) {

			while (j < dimB && b[j] < c[dimC - 1]) {
				j++;
			}
			if (j == dimB) {
				break;
			}
			c[dimC] = b[j];

		}else{
			while (i < dimA && a[i] < c[dimC - 1]) {
				i++;
			}
			if (i == dimA) {
				break;
			}
			c[dimC] = a[i];
		}
		dimC++;

	}

}

void solutie4() {
	int a[100] = { 2,4,8,10,14 };
	int b[100] = { 3,5,11 };
	int c[100];
	int dimA = 5;
	int dimB = 3;
	int dimC = 0;

	sortare(a, dimA);
	sortare(b, dimB);
	interclasare(a, dimA, b, dimB, c, dimC);

	for (int i = 0;i < dimC;i++) {
		cout << c[i] << " ";
	}
}