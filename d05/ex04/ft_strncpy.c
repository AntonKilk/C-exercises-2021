#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int ii;

    ii = 0;
    while (src[ii] != '\0')
    {   
        if (ii == n)
        {
            dest[ii] = '\0';
            break;
        }
        dest[ii] = src[ii];
        ii++;
    }
    dest[ii] = '\0';
    return dest; 
}

int main(void)
{
    char str[] = "Lorem ipsum dolor sit amet";
    char dest[15];
    printf("%s\n", ft_strncpy(dest, str, 10));
    printf("sizeof array = %zu\n", sizeof str);
    printf("sizeof dest = %zu\n", sizeof dest);
}