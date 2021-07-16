#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 != '\0')
    {
        if (*s1 != *s2)
        {   
            return 1;
        }
        s1++;
        s2++;
    }
    if (*s2 != '\0')
    {
        return 1;
    }   
    return 0; 
}

int main(void)
{
    char haystack[20] = "hello123";
    char needle[10] = "hello123";

    printf("%d\n", ft_strcmp(haystack, needle));
    return 0;
}