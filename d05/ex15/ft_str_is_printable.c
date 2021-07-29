#include <stdio.h>

int ft_str_is_printable(char *str)
{
    while (*str != '\0')
    {
        if(*str < ' ' || *str > '^?')
        {
            return 0;
        }
        str++;    
    }
    return 1;
}

int main(void)
{
    printf("%d\n", ft_str_is_printable("2134567a89dfdsыв"));
}