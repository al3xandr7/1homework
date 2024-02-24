#include <stdio.h>

int main()
{
    int A, B, sum = 0;

    printf("scrie 2 numere a si b: \n");

    scanf("%d%d", &A, &B);

    sum = A + B;

    printf("suma numerelor: %d", sum);

    return 0;
}