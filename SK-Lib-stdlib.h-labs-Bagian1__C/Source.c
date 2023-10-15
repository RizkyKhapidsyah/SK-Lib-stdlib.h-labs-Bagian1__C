#include <stdio.h>      /* printf */
#include <stdlib.h>     /* labs */
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	long int n, m;

	n = labs(65537L);
	m = labs(-100000L);

	printf("n=%ld\n", n);
	printf("m=%ld\n", m);

	_getch();
	return 0;
}