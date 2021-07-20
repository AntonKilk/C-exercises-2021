#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{   
    int ii;

    ii = 0;
    while (*s1 != '\0')
    {   
        if (*s1 != *s2)
        {   
            return *s1 - *s2;
        }
        if (ii == n - 1)
        {
            return 0;
        }
        s1++;
        s2++;
        ii++;
    }
    if (*s2 != '\0')
    {   
        return *s1 - *s2;
    }
    return 0; 
}

int main(void)
{
    char str1[20] = "abcde";
    char str2[20] = "abcdg";

    printf("%d\n", ft_strncmp(str1, str2, 4));
    printf("%d\n", strncmp(str1, str2, 4));
    return 0;
}