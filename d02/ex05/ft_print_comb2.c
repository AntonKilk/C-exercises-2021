#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
    char x = '00';
    while (x <='99')
    {   
        char y = '02';
        while (y <= '98')
        {   
            ft_putchar(x);
            ft_putchar(y);
            ft_putchar(',');
            if
            ft_putchar(' ');
            y++;
        }
        x++;
    }
}

int main(void)
{   
    ft_print_comb2();
    return 0;
}