#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{   
    char *s1 = src;
    char *s2 = dest;

    while (*s1 != '\0')
    {
        s1++;
    }
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s2++; 
    }
    return src;
}

int main(void)
{
    char str1[20] = "Hello,";
    char str2[10] = " World!";

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("The cat string is: %s\n", ft_strcat(str2, str1));
    return 0;
}