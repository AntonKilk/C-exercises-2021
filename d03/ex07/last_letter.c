#include <stdio.h>

char *last_letter(char *str)
{
    while (*str != '\0')
    {   
        str++;
    }
    return str-1;
}

int ft_strlen(char *str)
{   
    int length;

    length = 0;
    while (*(str + length) != '\0')
    {
            length++;
    }
    return (length);
}

void ft_swap(char *a, char *b)
{   
    char temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main (void)
{
    char str[] = "hello, world";
    char *first = str;
    char *last = last_letter(str);    
    printf("%s\n", str);
    ft_swap(first, last);
    printf("%s\n", str);
    return 0;
}