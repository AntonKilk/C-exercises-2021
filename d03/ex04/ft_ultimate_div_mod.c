#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    // printf("\n x = ");
    // printf("%d", *a);
    // printf("\n y = ");
    // printf("%d", *b);
    int div = *a / *b;
    int rem = *a % *b;
    *a = div;
    *b = rem;
    // printf("\n div = ");
    // printf("%d", *a);
    // printf("\n rem = ");
    // printf("%d", *b);
}

int main(void)
{
    int x = 10;
    int y = 3;
    ft_ultimate_div_mod(&x, &y);
}