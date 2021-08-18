#include <iostream>
#include <string.h>
#include <cmath>
#include <ctype.h>

using namespace std;

int main()
{
	int n;
	int x;
	int niz[10];
	int c;
	int counter = 0;
	cout << "Uneti 10 brojeva od 99 do 999" << endl;
	
	for (n = 0; n <= 9; n++) {
		cin >> x;
		while(x < 99 || x > 999) {
			cout << "Uneti ponovo" << endl;
			cin >> x;
		}
		niz[n] = x;
			

		}
	cout << "unesite kontrolni broj: " << endl;
	cin >> c;
	//cout << size(niz) << endl;
	for (int i = 0; i < size(niz); i++)
	{
		if (niz[i] == c)
		{
			counter++;
		}
		//cout << niz[i] << endl;
		
	}
	cout << "Broj ponavljanja: " << counter << endl;

	}


