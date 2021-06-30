#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    char c = nb + '0';
}

int main(void)
{   
    printf("Checking function ft_putnbr with positive integer \n");
    ft_putnbr(42);
    printf("\nChecking function ft_putnbr with zero \n");
    ft_putnbr(0);
    printf("\nChecking function ft_putnbr with negative integer \n");
    ft_putnbr(-5);
    return 0;
}