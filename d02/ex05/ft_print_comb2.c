#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
    char x1, x2;
    int ii = 0; 
    while (ii <= 99)
    {   
        x1 = ii/10 + '0';
        x2 = ii%10 +'0';
        char y1, y2;
        int jj = ii + 1;
        while (jj <= 99)
        {   
            y1 = jj/10 + '0';
            y2 = jj%10 + '0';
            ft_putchar(x1);
            ft_putchar(x2);
            ft_putchar(' ');
            ft_putchar(y1);
            ft_putchar(y2);
            if ( ii != 98) 
            {
                ft_putchar(',');
                ft_putchar(' ');   
            }
            jj++;
        }
        ii++;
    }
}

int main(void)
{   
    ft_print_comb2();
    return 0;
}