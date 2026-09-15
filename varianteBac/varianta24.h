#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//??

//SUBIECTUL III


//3 a) Scrieţi definiţia completă a subprogramului p care primeşte prin intermediul parametrului
//     n un număr natural nenul(n≤100), iar prin intermediul parametrului x un tablou
//     unidimensional cu n componente întregi, de maximum patru cifre fiecare.Subprogramul
//     furnizează prin intermediul parametrului mini valoarea minimă din tabloul x, prin
//     intermediul parametrului maxi valoarea maximă din x, iar prin intermediul parametrului sum
//     suma elementelor din tabloul x

void p(int x[], int n,int &mini,int &maxi,int &sum) {
    mini = x[0];
    maxi = x[0];
    sum = x[0];

    for (int i = 1;i < n;i++) {
		if (x[i] < mini) {
			mini = x[i];
		}

		if (x[i] > maxi) {
			maxi = x[i];
		}

		sum = sum + x[i];
	}

}

//Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n,
//(3≤n≤100), apoi cele n elemente distincte ale unui tablou unidimensional x.Fiecare dintre
//aceste elemente este un număr natural având cel mult patru cifre.Folosind apeluri utile ale
//subprogramului p, programul calculează şi afişează pe ecran media aritmetică a
//elementelor care ar rămâne în tabloul x dacă s - ar elimina valoarea minimă şi valoarea
//maximă din tablou.Valoarea afişată va avea cel mult 3 cifre după virgulă.
//Exemplu: dacă se citesc pentru n valoarea 5, iar pentru tabloul x valorile(1, 9, 4, 8, 5),
//programul va afişa una dintre valorile 5.667 sau 5.666.

//functie de stergere 
void stergere(int x[], int& dim, int poz) {

    for (int i = poz;i < dim;i++) {
        x[i] = x[i + 1];
    }
    dim--;
}

void solutie2b() {
    int n = 5;
    int x[100] = {1,9,4,8,5};
    int mini=100, maxi=0, sum=0;
    int ct = 1;

    p(x, n, mini, maxi, sum);

    for (int i = 0;i < n;i++) {
        if (mini == x[i] || maxi == x[i]) {
            stergere(x, n, i);
            i--;
        }

    }
    mini = 100;
    maxi = 0;
    sum = 0;

    p(x, n, mini, maxi, sum);
    double medie = (double) sum / n;
    
    cout << mini << ", " << maxi<<" ," << medie<<endl;
}