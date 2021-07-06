#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main (void)
{   
    int x = 1;
    int *p1x = &x;
    int **p2x = &p1x;
    int ***p3x = &p2x;
    int ****p4x = &p3x;
    int *****p5x = &p4x;
    int ******p6x = &p5x;
    int *******p7x = &p6x;
    int ********p8x = &p7x;
    printf("%d \n", x);
    ft_ultimate_ft(&p8x);
    printf("%d \n", x);
}