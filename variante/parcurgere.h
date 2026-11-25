#ifndef PARCURGERE_H_INCLUDED
#define PARCURGERE_H_INCLUDED

#include <iostream>
#include <fstream>
using namespace std;

//var1 III ex4
//a)
int sub(int v[], int n, int a) {
	int ct = 0;

	for (int i = 0;i < n;i++) {
		if (v[i] < a) {
			ct++;
		}
	}

	return ct;
}

//b)
void solutie_var1_sIII_ex4_b() {
	int n = 0;
	int v[100] = { 0 };
	int f[100] = { 0 };
	bool vf = 1;

	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> v[i];
	}

	for (int i = 0;i < n;i++) {
		int poz = sub(v, n, v[i]);

		if (f[poz] == 1) {
			vf = 0;
			break;
		}

		f[poz] = 1;
	}

	if (vf) {
		cout << "DA" << endl;
	}
	else {
		cout << "NU" << endl;
	}

}
//

//var6, III 3
void var6_III_3() {
	int n = 0;
	int a[101] = {};
	int s = 0;

	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
		s = s + a[i];
	}

	for (int i = n - 1;i >= 0;i--) {
		cout << s << endl;
		s = s - a[i];
	}
}
//

//var16 III 3
int multiplu(int a[], int n, int k) {
	int ct = 0;

	for (int i = 0;i < n;i++) {
		if (a[i] % k == 0 && a[i] % 10 == k) {
			ct++;
		}
	}

	return ct;
}

void solutie_multiplu() {
	int a[100] = { 9,273,63,83,93,123 };
	int n = 6;
	int k = 3;
	cout<<multiplu(a, n, k);
}
//

//var17, III 3
int interval(int a[], int n) {
	int x = a[0];
	int y = a[n - 1];
	int ct = 0;

	if (x > y) {
		int aux = x;
		x = y;
		y = aux;
	}

	for (int i = 0;i < n; i++) {
		if (a[i] >= x && a[i] <= y) {
			ct++;
		}
	}

	return ct;
}

void solutie_interval() {
	int a[100] = { 12,27,6,8,9,2 };
	int n = 6;
	cout << interval(a, n);
}
//

//var18, III 3
int count(double a[], int n) {
	double medie = 0;
	double s = 0;
	int ct = 0;

	for (int i = 0;i < n;i++) {
		s = s + a[i];
	}
	medie = s / n;

	for (int i = 0;i < n;i++) {
		if (a[i] >= medie) {
			ct++;
		}
	}
	return ct;
}

void solutie_count() {
	double a[100] = { 12, 7.5, 6.5, 3, 8.5, 7.5 };
	int n = 6;
	cout << count(a, n);
}
//

//var23,III ex4 ??
void var23_sIII_ex4() {
	

}

void solutie_var23_sIII_ex4() {
	int n = 4;
	int a1 = 17;
	int b1 = 20;
	int a2 = 2;
	int b2 = 6;
	int a3 = 10;
	int b3 = 15;
	int a4 = 8;
	int b4 = 16;
}
//

//var25, III, ex3
void f(int n, int a[],int &k) {
	int vf = 0;
    k = 0;
	
	for (int i = n-1;i >= 0;i--) {
		if (a[i] % 2 == 0) {
			k = k * 10 + a[i];
			vf = 1;
		}
	}

	if (!vf) {
		k = -1;
	}
}

void solutie_var25_sIII_3() {
	int n = 6;
	int a[10] = { 2,3,5,6,4,1 };
	int k = 0;
	f(n, a, k);
	cout << k<<endl;
}
#endif
