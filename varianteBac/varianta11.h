#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III


//programul conţine pe prima linie un număr natural n (n<30000), iar pe a
//doua linie n numere întregi având maximum 4 cifre fiecare. Se cere să se afişeze pe ecran
//un şir de n numere întregi, cu proprietatea că valoarea termenului de pe poziţia i
//(i = 1, 2, …, n) din acest şir este egală cu cea mai mare dintre primele i valori de pe a doua
//linie a programului.

void solutie3() {
    int n = 0;
    int a[30001];

    cout << "n=";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        cout << max << " ";
    }
    cout << endl;
}
