#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//SUBIECTUL III

//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤100) şi cele
//3 * n elemente ale tabloului unidimensional v, fiecare element fiind un număr natural cu cel
//mult patru cifre fiecare.Tabloul este împărţit în trei zone, cu câte n elemente : prima zonă
//conţine primele n elemente din tablou, a doua zonă conţine următoarele n elemente din
//tablou, restul elementelor fiind în zona a treia.Programul va interschimba primul element
//par(dacă există) al zonei unu cu ultimul element impar(dacă există) al zonei trei şi apoi va
//afisa toate elementele tabloului, separate prin câte un spaţiu.În cazul în care unul dintre
//aceste două elemente, care urmează a fi interschimbate, nu există, programul nu va efectua 
//nici o modificare asupra tabloului dat.

void solutie3() {
    int n = 0;
    int v[301];

    cin >> n;

    for (int i = 0; i < 3 * n; i++) {
        cin >> v[i];
    }

    int poz_par = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            poz_par = i;
            break;
        }
    }

    int poz_impar = -1;
    for (int i = 3 * n - 1; i >= 2 * n; i--) {
        if (v[i] % 2 != 0) {
            poz_impar = i;
            break;
        }
    }

    if (poz_par != -1 && poz_impar != -1) {
        int aux = v[poz_par];
        v[poz_par] = v[poz_impar];
        v[poz_impar] = aux;
    }

    for (int i = 0; i < 3 * n; i++) {
        cout << v[i] << " ";
    }
}