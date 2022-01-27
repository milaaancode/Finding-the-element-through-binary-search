#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int binarnapret(int a[], int g, int d, int x);

void main() {
	int n;/*Dimenzija niza*/
	int a[MAX];/*NEopadajuci niz celih brojeva*/
	int x;/*Element koji se trazi*/
	int poz;/*indeks clana niza cija je vrednost jednaka vrednosti koja se trazi*/
	int pom;
	int i;
	printf("Unesite broj clanova niza: ");
	scanf("%d", &n);
	printf("a[0] = ");
	scanf("%d", &a[0]);
	pom = a[0];
	for ( i = 1; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &pom);
		if (pom < a[i - 1]) {
			printf("\nUnos ne podrzava neopadajuci poredak!\n");
			break;
		}
		a[i] = pom;
	}
	if (i != n) {
		return -1;
	}
	printf("Unesite element koji se trazi medju clanovima: ");
	scanf("%d", &x);
	poz = binarnapret(a, 0, n - 1, x);
	if (poz == -1) {
		printf("\nElement se ne nalazi u nizu!\n");
	}
	else {
		printf("\nBroj %d se nalazi na %d poziciji unesenog sortiranog niza.\n", x, poz + 1 );
	}
}