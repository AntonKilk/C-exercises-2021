#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    
}

int main(void)
{
    char haystack[20] = "TutorialsPoint";
    char needle[10] = "Point";

    printf("The substring is: %s\n", ft_strstr(haystack, needle));
    return 0;
}