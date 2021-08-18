#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int niz1[10];
	int i;
	int j;
	
	int temp;
	ifstream fajl("ulaz.txt");
	for (i = 0; i <10; i++) {
		fajl >> niz1[i];
	cout << niz1[i] << endl;
	}

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (niz1[i] > niz1[j])
			{
				temp = niz1[i];
				niz1[i] = niz1[j];
				niz1[j] = temp;

			}
			
		}
	}
	cout << "poredjani niz je: \n" << endl;
	for (j = 0; j < 10; j++) {
		cout << niz1[j] << endl;
		
	}
	
		ofstream fajl2;
		fajl2.open("izlaz.txt");
		for (j = 0; j < 10; j++) 
			fajl2 << niz1[j] << endl;
			fajl2.close();

		
	


}

