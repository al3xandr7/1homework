
#include <stdio.h>

int main()
{
	int x, yvariables;
	printf("scrie valoare lui x");
	scanf("%d", &x);
	printf("\n scrie valoare lui y ");
	scanf("%d", &y);


	int temp = x;

	x = y;

	y = temp;

	printf("\ndupa ce leam schimbat: x = %d, y = %d", x, y);
	return 0;
}
