#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn(char *prefix, int n)
{   
    while (n < 9)
    {   
        ft_putchar(prefix);
        ft_putchar(n + '1');
        ft_putchar(',');
        ft_putchar(' ');
        n++;
    }
}

int main(void)
{
    ft_print_combn("1", 3);
}