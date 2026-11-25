#ifndef HARTIE_VECTORI_H_INCLUDED
#define HARTIE_VECTORI_H_INCLUDED

#include <iostream>
#include <fstream>
using namespace std;

//
//var40 subIII ex2
//i<5     j>i      v[i]<v[j]      v[i]     v[j]           v[1]    v[2]   v[3]   v[4]   v[5]
//1<5     5>1       2<-4 nu         -        -             2       13     1       5     -4
// -      4>1       2<5 da          5        2             5       13     1       2     -4
// -      3>1       5<1 nu          -        -             5       13     1       2     -4
// -      2>1       5<13 da        13        2             13      5      1       2     -4
// -      1>1 nu     -             -         - 
//2<5     5>2       5<-4 nu        -         -             13      5      1       2     -4
//-       4>2       5<2 nu         -         -             13      5      1       2     -4
//-       3>2       5<1 nu         -         -             13      5      1       2     -4
//        2>2 nu      -            -         - 
//3<5     5>3       1<-4 nu                                13      5      1       2     -4
//-       4>3       1<2 da         2          1            13      5      2       1     -4
//-       4>4 nu      -            -          -
//4<5     5>4       1<-4 nu        -          -            13      5      2       1     -4
//5<5 nu => 3 interschimbari -> elemente: v[1]=23 v[2]=14 v[3]=2 v[4]=-7 v[5]=-21

void afisare_(int v[], int d) {
	for (int i = 1;i <= d;i++) {
		cout << v[i] << " ";
	}
}

void var40_subIII_ex2() {
	int v[100] = { 0,2,13,1,5,-4 };
	int d = 5;
	int aux = 0;
	int ct = 0;

	for (int i = 1;i < 5;i++) {
		for (int j = 5;j > i;j--) {
			if (v[i] < v[j])
			{
				ct++;
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	cout << ct << endl;
	afisare_(v, d);
}
//

//
void mutaLaFinal(int a[], int d,int poz) {
	int aux = a[poz];

	for (int j = poz;j < d - 1;j++) {
		a[j] = a[j + 1];
	}

	a[d - 1] = aux;
}

void afisare(int v[100],int d) {
	for (int i = 0;i < d;i++) {
		cout << v[i] << " ";
	}
}

//	int a[100] = { 12,0,0,-3,-8,0 };      a[j]                 a[0]    a[1]    a[2]    a[3]   a[4]    a[5]
//i<d           a[i]==0        j<d-1       -                    12       0      0        -3    -8       0
//0<6            12=0 nu         -                          
//1<6            0=0 da         1<5      a[1]=a[2]=0            12       0      0        -3    -8       0
// -                            2<5      a[2]=a[3]=-3           12       0     -3        -3    -8       0
// -                            3<5      a[3]=a[4]=-8           12       0     -3        -8    -8       0
//                              4<5      a[4]=a[5]=0            12       0     -3        -8     0       0
//                              5<5 nu   a[5]=aux=0             12       0     -3        -8     0       0
// 2<6           -3=0nu          -          -       
// 3<6           -8==0 nu        -          -
// 4<6           0=0 da         5<5 nu   a[5]=aux=0             12       0     -3        -8     0       0  
// 5<6           0=0 da         5<5 nu   a[5]=aux=0
// 6<6 nu
void nule(int a[100], int d) {

	for (int i =0 ;i < d;i++) {
		if (a[i] == 0) {
			mutaLaFinal(a, d, i);
			afisare(a, d);
			cout << endl;
			i--;
			d--;
		}
	}
}

void solutieNule() {
	int a[100] = { 12,0,0,-3,-8,0 };
	int d = 6;
	nule(a, d);
	afisare(a, d);
}
//


//41 sIII.1 d)

//var75 III 2.
// i   i<4    j    j<6      xi<xj   x0  x1  x2  x3  x4  x5
// 0   0<4    1     1<6      10>5    5  10   -6  7  0   -2
// -    -     2     2<6      5>-6    -6 10    5  7  0   -2
// -    -     3     3<6      -6>7nu     la fel
// -    -     4     4<6      -6>0nu     la fel
// -    -     5     5<6      -6>-2 nu   la fel
// -    -     6     6<6 nu     -           -
// 1   1<4    2     2<6      10>5    -6  5   10  7  0   -2
// -    -     3     3<6      5>7 nu      la fel
// -    -     4     4<6      5>0 da  -6  0   10  7  5   -2
// -    -     5     5<6      0>-2 da -6  -2  10  7  5   0
// -    -     6     6<6 nu     -          -
// 2   2<4    3     3<6      10>7    -6   -2  7  10 5   0
// -    -     4     4<6      7>5     -6   -2  5  10 7   0
// -    -     5     5<6      5>0     -6   -2  0  10 7   5
// -    -     6     6<6       -           -
// 3   3<4    4     4<6     10>7      -6  -2  0   7 10  5
// -    -     5     5<6     7>5       -6  -2  0   5 10  7

// => -6 -2 5 10 7 este afisat

//




#endif
