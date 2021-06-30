#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
    char x = '0';
    while (x<='9')
    {   
        char y = x + 1;
        while (y <= '9')
        {   
            char z = y + 1;
            while (z <= '9')
            {   
                ft_putchar(x);
                ft_putchar(y);
                ft_putchar(z);
                if(x != '7')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }              
                z++;
            }
            y++;
        }
        x++;
    }
}

int main(void)
{   
    ft_print_comb();
    return 0;
}