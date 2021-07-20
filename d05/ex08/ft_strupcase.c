#include <stdio.h>


char *ft_strupcase(char *str)
{   
    int ii;

    ii = 0;
    while (*str != '\0')
    {   
        printf("%c\n", *str);
        if (*str >= 'a' && *str <= 'z')
        {   
            printf("%c\n", *str);
            str[ii] = str[ii] - 32;
        }
        str++;
        ii++;
    }
    return str;
}

int main(void)
{
    printf("%s", ft_strupcase("abcdefgh"));
}