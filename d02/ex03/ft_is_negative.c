#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
    int num;

    if (n < 0)
    {
        ft_putchar('N');
    }
    else 
    {
        ft_putchar('P');
    }
}

int main(void)
{   
    ft_is_negative(5);
    ft_is_negative(0);
    ft_is_negative(-1);
    return 0;
}