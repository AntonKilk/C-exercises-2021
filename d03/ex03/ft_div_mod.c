#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b;
    *mod = a%b;
}

int main(void)
{
    int x, y;
    ft_div_mod(541241414, 441241, &x, &y);
    printf("\n div = ");
    printf("%d", x);
    printf("\n mod = ");
    printf("%d", y);
}