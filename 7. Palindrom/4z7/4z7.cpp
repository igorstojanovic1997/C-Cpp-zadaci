#include <iostream>
#include <string.h>
#include <cmath>
void proveri( char* niz);

using namespace std;

int main()
{
	char val[10];
	cout << "unesi rec" << endl;
	cin >> val;
	char* str = val;
	proveri(str);


}
void proveri( char* str) {

	int l = 0;
	int h = strlen(str) - 1;
	while (h > l)
	{
		if (str[l++] != str[h--])
		{
			cout << str << " nije palindrom" << endl;;
			return;
		}
	}
	cout << str << " je palindrom" << endl;
}


