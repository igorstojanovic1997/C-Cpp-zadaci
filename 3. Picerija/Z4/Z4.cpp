#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	cout << "Ponuda:\n1. Mala pizza: 220 din \n2. Srednja pizza: 400 din \n3. Porodicna pizza: 1000 din \n4. Limunada: 120 din \n5. Coca cola: 150 din \n6. Index sendvic: 250 din " << endl;
	int racun=0;
	int artikal;
	int popust;
	int racunsapopustom;
	cin >> artikal;

	while(artikal != 0)

	switch (artikal) {
	case 1:
		cout << "1. Mala pizza: 220 din" << endl;
		racun += 220;
		cin >> artikal;
		break;
	case 2:
		cout << "2. Srednja pizza: 400 din" << endl;
		racun += 400;
		cin >> artikal;
		break;
	case 3:
		cout << "3. Porodicna pizza: 1000 din" << endl;
		racun += 1000;
		cin >> artikal;
		break;
	case 4:
		cout << "4. Limunada: 120 din" << endl;
		racun += 120;
		cin >> artikal;
		break;
	case 5:
		cout << "5. Coca cola: 150 din" << endl;
		racun += 150;
		cin >> artikal;
		break;
	case 6:
		cout << "6. Index sendvic: 250 din" << endl;
		racun += 250;
		cin >> artikal;
		break;
	default:
		
		break;


	}
	
	if (racun >= 3000) {
		popust = racun * 0.05;
		racunsapopustom = racun - popust;
		cout << "Ukupan racun je " << racun << endl;
		cout << "Racun je veci od 3000, cena sa popustom je: " << racunsapopustom << endl;
	}
	else {

		cout << "Ukupan racun je " << racun << endl;
	}

}

