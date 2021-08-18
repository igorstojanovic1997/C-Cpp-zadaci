#include <iostream>
#include <string.h>

using namespace std;
void funkcja(int niz5[5]);
void ispisiNiz(int abc[5]);
int maksimum(int abe[5]);

int main()
{
	int niz1[5];
	int i;
	int x, maks;
	cout << "unesite 5 clanova niza:" << endl;
	for (i = 0; i < 5; i++) {
		cin >> x;
		niz1[i] = x;
	}

	funkcja(niz1);
	maks = maksimum(niz1);
	cout <<"maks je: "<< maks << endl;


}

void funkcja(int niz2[5]) {
	int temp;
	for (int j = 0; j < 5; j++) {
		for (int i = j + 1; i < 5;i++) {
			if (niz2[j] < niz2[i]) {
				temp = niz2[j];
				niz2[j] = niz2[i];
				niz2[i] = temp;
			}
		}
	}
	ispisiNiz(niz2);
	
}

void ispisiNiz(int niz3[5]) {
	for (int y = 0; y < 5; y++) {
		cout << "\n" << niz3[y] << endl;
	}
}

int maksimum(int asdf[5]) {
	int temp=0;
	for (int i = 0; i < 5; i++) {
		if (asdf[i] > temp) {
			temp = asdf[i];
		}
	}
	return temp;

}
