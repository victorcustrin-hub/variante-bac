#pragma once
#include <iostream>
#include <cmath>
using namespace std;



//1.

// a={2,5,9}      b={1,5,7,12}
//                                                 0  1  2  3  4  5  6
//i<n && j<m           a[i]<=b[j]                  0  0  0  0  0  0  0     p
//  0<3,0<4             2<1 fals                   1                       1
//  0<3,1<4             2<5 adev                      2                    2
//  1<3,1<4             5<=5 adev                        5                 3 
//  2<3,1<4             9<=5 fals                           5              4                                
//  2<3,2<4             9<=7 fals                              7           5
//  2<3,3<4             9<=12 adev                                9        6
//  3<3 fals
// 

//while(j<m)           c[p]
//3<4 adev            c[7]=12
//4<4 fals


void unire(int a[], int n, int b[], int m, int c[], int &p) {
	int i = 0;
	int j = 0;
	p = 0;

	while (i < n && j < m) {
		if (a[i] <= b[j]) {
			c[p] = a[i];
			i++;
		}
		else {
			c[p] = b[j];
			j++;
		}
		p++;
	}
	
	while (i < n) {
		c[p] = a[i];
		i++;
		p++;
	}

	while (j < m) {
		c[p] = b[j];
		j++;
		p++;
	}

}

void solutie1() {
	int a[100] = { 2,5,9 };
	int b[100] = { 1,5,7,12 };
	int c[100];
	int n = 3;
	int m = 4;
	int p = 0;

	unire(a, n, b, m, c, p);

	for (int i = 0;i < p;i++) {
		cout << c[i]<<" ";
	}
	cout << endl;
	cout << p;
}
//

//2.

//int a[100] = { 2,4,5,5,9,14 };
//int b[100] = { 1,5,9,20 };

//i<n && j<m    a[i]==b[j]     a[i]<b[j]     a[i]>b[j]
//0<6 0<4        2=1 fals       2<1 fals      2>1 adev
//0<6 1<4        2=5 fals       2<5 adev         -
//1<6,1<4        4=5 fals       4<5 adev
//2<6,1<4        5=5 adev         -              -
//4<6,2<4        9=5 fals       9<5 fals      9>5 adev
//4<6,2<4        9=9 adev         -              -
//5<6,3<4        14=20 fals     14<20 adev       -
//6<6 fals   

void comune(int a[], int n, int b[], int m) {
	int i = 0;
	int j = 0;
	bool vf = 0;

	while (i < n && j < m) {
		if (a[i] == b[j]) {
			cout << a[i] << " ";
			vf = 1;

			int valoare = a[i];
			while (i < n && a[i] == valoare) {
				i++;
			}
			while (j < m && b[j] == valoare) {
				j++;
			}
		}
		else if (a[i] < b[j]) {
			i++;
		}
		else {
			j++;
		}
	}

	if (vf == 0) {
		cout << "NU EXISTA"<<endl;
	}

}

void solutie2() {
	int a[100] = { 2,4,5,5,9,14 };
	int b[100] = { 1,5,9,20 };
	int n = 6;
	int m = 4;

	comune(a, n, b, m);
}
//

//3.!!
void doarInA(int a[], int n, int b[], int m) {
	int i = 0;
	int j = 0;
	bool vf = 0;

	while (i < n) {
		if (j < m) {
			if (a[i] < b[j]) {
				cout << a[i]<<" ";
				vf = 1;
				int val = a[i];
				while (i < n && a[i] == val) {
					i++;
				}
			}
			else if (a[i] == b[j]) {
				int val = a[i];
				while (i < n && a[i] == val) {
					i++;
				}
				while (j < m && b[j] == val) {
					j++;
				}
			}
			else {
				j++;
			}
		}
		else {
			cout << a[i] << " ";
			vf = 1;

			int val = a[i];
			while (i < n && a[i] == val) {
				i++;
			}
		}
	}
	if (vf == 0) {
		cout << "NU EXISTA" << endl;
	}
}

void solutie3() {
	int a[100] = { 2,5,5,9,14 };
	int b[100] = { 1,5,9,20 };
	int n = 5;
	int m = 4;

	doarInA(a, n, b, m);
}
//

//4.
void reuniune(int a[], int n, int b[], int m, int c[], int &p) {
	int i = 0;
	int j = 0;

	while (i < n && j < m) {
		if (a[i] < b[j]) {
			c[p] = a[i];
			int val = a[i];
			while (i < n && a[i] == val) {
				i++;
			}
			p++;
		}
		else if (a[i] == b[j]) {
			c[p] = a[i];
			int val = a[i];
			while (i < n && a[i] == val) {
				i++;
			}
			while (j < m && b[j] == val) {
				j++;
			}
			p++;
		}
		else {
			c[p] = b[j];
			int val = b[j];
			while (j < m && b[j] == val) {
				j++;
			}
			p++;
		}
	}
	
	while (i < n) {
		c[p] = a[i];
		int val = a[i];
		while (i < n && a[i] == val) {
			i++;
		}
		p++;
	}

	while (j < m) {
		c[p] = b[j];
		int val = b[j];
		while (j < m && b[j] == val) {
			j++;
		}
		p++;
	}


	for (int i = 0;i < p;i++) {
		cout << c[i] << " ";
	}
	cout << endl;

	cout << "p = " << p << endl;
}

void solutie4() {
	int a[100] = { 4,4,4 };
	int b[100] = { 4,4 };
	int c[100];
	int p = 0;
	int n = 3;
	int m = 2;

	reuniune(a, n, b, m, c, p);
}
//

//5.

//a=2,4,8,10,14
//b=3,5,11
void alternant(int a[], int n, int b[], int m) {
	int i = 0;
	int j = 0;
	int ultim = 0;
	bool vf_par = 0;


	if (a[i] < b[j]) {
		cout << a[i] << " ";
		ultim = a[i];
		i++;
		vf_par = false;
	}
	else {
		cout << b[j] << " ";
		ultim = b[j];
		j++;
		vf_par = true;
	}

	while (i < n || j < m) {

		if (vf_par) {

			if (i < n && a[i] <= ultim) {
				i++;
			}
			
			else if (i < n && a[i] > ultim) {
				cout << a[i] << " ";
				ultim = a[i];
				i++;
				vf_par = false;
			}
			else {
				break;
			}
		}
		else { 
			if (j < m && b[j] <= ultim) {
				j++;
			}
			else if (j < m && b[j] > ultim) {
				cout << b[j] << " ";
				ultim = b[j];
				j++;
				vf_par = true;
			}
			else {
				break;
			}
		}
	}
}

void solutie5() {
	int a[100] = { 2,4,8,10,14 };
	int b[100] = { 3,5,11 };
	int n = 5;
	int m = 3;

	alternant(a, n, b, m);
}
//

//6.

//void perechi(int a[], int n, int b[], int m, int s) {
//	bool vf = false;
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < m;j++) {
//			if (a[i] + b[j] == s) {
//				cout << a[i] << " " << b[j] << endl;
//				vf = true;
//			}
//		}
//	}

//	if (vf == false) {
//		cout << "NU EXISTA";
//	}

//}

void perechi(int a[], int n, int b[], int m, int s) {
	int i = 0;
	int j = m - 1;
	bool vf = 0;
	
	while (i < n && j >= 0) {
		int suma = a[i] + b[j];

		if (suma == s) {
			cout << a[i] << " " << b[j] << endl;
			i++;
			j--;
			vf = 1;
		}
		else if (suma < s) {
			i++;
		}
		else {
			j--;
		}
	}

	if (vf == 0) {
		cout << "NU EXISTA";
	}

}

void solutie6() {
	int a[100] = { 1,3,6,8,11};
	int b[100] = { 2,4,5,9 };
	int n = 5;
	int m = 4;
	int s = 10;

	perechi(a, n, b, m,s);
}
//

//7.
int alKlea(int a[], int n, int b[], int m, int k) {
	int i = 0;
	int j = 0;
	int ct = 0;

	while (i < n && j < m) {
		ct++;

		if (a[i] <= b[j]) {
			if (ct == k) {
				return a[i];
			}
			i++;
		}
		else {
			if (ct == k) {
				return b[j];
			}
			j++;
		}
	}

	while (i < n) {
		ct++;
		if (ct == k) {
			return a[i];
		}
		i++;
	}

	while (j < m) {
		ct++;
		if (ct == k) {
			return b[j];
		}
		j++;
	}
}

void solutie7() {
	int a[100] = { 2,5,9 };
	int b[100] = { 1,5,7,12 };
	int n = 3;
	int m = 4;
	int k = 4;

	cout<<alKlea(a, n, b, m, k);
}
//