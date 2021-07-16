#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{   
    int ii;

    ii = 0;
    while (ii < n)
    {
        ii++;
    }
    return s1[ii] - s2[ii]; 
}

int main(void)
{
    char haystack[20] = "Poin";
    char needle[10] = "Point";

    printf("%d\n", ft_strncmp(haystack, needle, 6));
    printf("%d\n", strncmp(haystack, needle, 6));
    return 0;
}