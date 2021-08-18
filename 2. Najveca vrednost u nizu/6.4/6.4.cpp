#include <stdio.h>
#define MAX 10

int main()

{
	int i, imax = 0;
	float niz[MAX];

	printf("\nUnesite %d realnih brojeva:",MAX);
	for (i = 0; i < MAX; i++)
		scanf_s("%f",&niz[i]);
	for (i = 1; i < MAX; i++)
		if (niz[i] > niz[imax])
			imax = i;

	printf("\nNajvecu vrednost ima %d. element niza i to je %f\n", imax+1,niz[imax]);
	
}