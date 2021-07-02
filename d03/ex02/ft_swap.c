#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{   
    int x = 11;
    int y = 22;
    printf("%d %d \n", x, y);
    ft_swap(&x, &y);
    printf("%d %d \n", x, y);
}