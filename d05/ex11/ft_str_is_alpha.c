#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    while (*str != '\0')
    {
        if(*str < 'A' || *str > 'z' || (*str > 'Z' && *str < 'a'))
        {
            return 0;
        }
        str++;    
    }
    return 1;
}

int main(void)
{
    printf("%d\n", ft_str_is_alpha("ABfa{"));
}