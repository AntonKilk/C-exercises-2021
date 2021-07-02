#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main (void)
{   
    int x = 1;
    printf("%d \n", x);
    ft_ft(&x);
    printf("%d \n", x);
}