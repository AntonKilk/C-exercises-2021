#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{    
    if(nb == 0)
    {
        ft_putchar('0');
    }
    else 
    {
        if(nb < 0)
        {
            nb *= -1;
            ft_putchar('-');
        }
        char ch;
        char arr[30];
        int i = 0;
        while (nb > 0)
        {   
            ch = nb % 10 + '0';  
            arr[i] = ch;     
            nb /= 10; 
            i++;
        }
        while (i > 0)
        {
            ft_putchar(arr[i-1]);
            i--;
        }
    }
}           

int main(void)
{   
    printf("Checking function with positive integer: \n");
    ft_putnbr(-2147483648);
    return 0;
}