#pragma once
#include <iostream>
using namespace std;

//??

//a) Scrieţi definiţia completă a subprogramului Cautare, cu trei parametri, n, x şi v, care
//primeşte prin parametrul n un număr natural(1≤n≤1000), prin parametrul x un tablou
//unidimensional format din n componente(numere întregi de cel mult patru cifre fiecare : x1,
//x2, …, xn) memorate în ordine crescătoare şi prin parametrul v un număr întreg de cel mult
//patru cifre, diferit de oricare dintre elementele tabloului unidimensional x.
//Subprogramul va căuta, în mod eficient din punct de vedere al timpului de executare, poziţia
//pe care ar trebui inserată valoarea v în şirul x astfel încât să se obţină tot un şir ordonat şi
//returnează această poziţie. (6p.)

int cautare(int n, int x[], int v) {
    int inf = 1;
    int sup = n + 1;

    while (inf <= sup) {
        int mij = (inf + sup) / 2;
        if (x[mij] > v) {
            sup = mij - 1;
        }
        if (x[mij] < v) {
            inf = mij + 1;
        }
    }
    return -1;
}


//b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
//eficienţa ei(3 – 4 rânduri). (4p.)







//c) Fişierul text sir.in conţine cel mult 1000 numere naturale de maximum patru cifre
//fiecare, numerele fiind diferite două câte două şi despărţite prin câte un spaţiu.
//Scrieţi un program C / C++ care citeşte numerele din fişierul sir.in şi, folosind apeluri utile
//ale subprogramului Cautare, construieşte în memorie un tablou unidimensional care va
//conţine toate numerele din fişierul sir.in ordonate crescător.Programul scrie în fişierul
//text sir.out şirul obţinut, câte 10 elemente pe un rând, elementele de pe acelaşi rând
//fiind despărţite printr - un singur spaţiu.
//Exemplu: dacă fişierul sir.in conţine numerele : 7 - 5 635 - 456 0 8 587 - 98 65 3 - 8
//atunci după executarea programului fişierul sir.out va conţine : -456 - 98 - 8 - 5 0 3 7 8 65 587 635