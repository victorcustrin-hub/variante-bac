#pragma once
#include <iostream>
#include <cmath>
using namespace std;


//SUBIECTUL III


//Se citeşte de la tastatură un număr natural n (n≤500) şi apoi n cifre separate prin spaţii. Se
//cere să se afişeze pe ecran cele n cifre citite, în ordine crescătoare, separate prin câte un
//spaţiu.
void solutie3() {
    int n = 0;
    int cif = 0;
    int fr[10] = { 0 };

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cif;
        fr[cif]++;
    }

    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j < fr[i]; j++) {
            cout << i << " ";
        }
    }
    cout << endl;

}

