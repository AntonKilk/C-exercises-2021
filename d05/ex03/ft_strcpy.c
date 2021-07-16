#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int ii;

    ii = 0;
    while (src[ii] != '\0')
    {
        dest[ii] = src[ii];
        ii++;
    }
    dest[ii] = '\0';
    return dest; 
}

int main(void)
{
    char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    char dest[20];
    printf("%s\n", ft_strcpy(dest, str));
    char data[] = "Hello, world";
    char overwrite[] = "test";
    ft_strcpy(data, overwrite);
    printf("%s (should be %s)\n", data, overwrite);
}