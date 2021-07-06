#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{   
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

int main (void)
{   
    char s[] = "HELL0 w0rld!";
    ft_putstr(s);
}