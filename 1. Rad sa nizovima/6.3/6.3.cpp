#include <stdio.h>
#define MAX 10

int main()

{
	int i, n, niz[MAX], suma = 0;

	do
	{
		printf("\nUnesite duzinu niza n<%d:",MAX);
		scanf_s("%d",&n);
	} 
	while (n<=0 || n>MAX);

	printf("\nUnesite vrednosti elemenata niza:");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d",&niz[i]);
		suma += niz[i];
	}
	printf("\nSrednja vrednost niza je:%f",(float)suma/n);

}