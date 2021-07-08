#include <stdio.h>

char *last_letter(char *str)
{
    while (*str != '\0')
    {   
        str++;
    }
    return str-1;
}

char *swap(char *str)
{
    int temp;
    char first, last;

    first = *str;
    last = *last_letter(str);

    temp = first;
    first = last;
    last = temp;

    return str;
}

int main (void)
{   
printf("%s\n", last_letter("hello, world"));
printf("%s\n", swap("hello, world"));
return 0;
}