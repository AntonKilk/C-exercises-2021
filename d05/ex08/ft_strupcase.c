#include <stdio.h>


char *ft_strupcase(char *str)
{   
    char *s = str;
    while (*s != '\0')
    {   
        if (*s >= 'a' && *s <= 'z')
        {   
            *s += 'A'-'a';
        }
        s++;
    }
    return str;
}

int main(void)
{   
    char str[] = "ab cde 12 fgh";
    printf("%s", ft_strupcase(str));
}