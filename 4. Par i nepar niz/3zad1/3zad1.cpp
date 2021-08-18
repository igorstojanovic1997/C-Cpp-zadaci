#include <iostream>
#include <cmath>
#include <string.h>
#include <ctype.h>

using namespace std;
int niz[50];
int niz2[100];


int main()
{
	int x;
	int y;

	for (x = 1; x < 51; x++) {
		if (x % 2 != 0) {
			niz[x] += x;
			cout << niz[x] << endl;
		}
		



	}cout << "\n";
	for (x = 1; x < 51; x++) {
		if (x % 2 != 0) {
			niz2[x] += (x*2);
			cout << niz2[x] << endl;

		}
	}
}

