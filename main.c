#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void acquisitionComplexe(int *pa, int *pb);
void editionComplexe(int a, int b);
void additionComplexe(int a1, int b1, int a2, int b2, int *pa3, int *pb3);
int main()
{
	int a1, b1, a2, b2, a3, b3;
	printf("Entrez le premier complexe.\n");
	acquisitionComplexe(&a1, &b1);
	printf("Entrez le deuxieme complexe.\n");
	acquisitionComplexe(&a2, &b2);
	// additionne a1+i*b1 et a2+i*b2 et stocke le résultat dans a3+i*b3
	additionComplexe(a1, b1, a2, b2, &a3, &b3);
	editionComplexe(a3, b3);
	return 0;
}

void acquisitionComplexe(int *pa, int *pb)
{
	printf("Partie réelle ? ");
	scanf("%d", pa);
	printf("Partie imaginaire ? ");
	scanf("%d", pb);
}

void editionComplexe(int a, int b)
{
	printf("%d+%d*i\n", a, b);
}

void additionComplexe(int a1, int b1, int a2, int b2, int *pa3, int *pb3)
{
	// Programmer la fonction additionComplexe
	*pa3 = a1 + a2;
	*pb3 = b1 + b2;
}
