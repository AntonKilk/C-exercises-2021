#include <stdio.h>

int ft_strlen(char *str)
{   
    int length;

    length = 0;
    while (*(str + length) != '\0')
    {
            length++;
    }
    return (length);
}

int ft_atoi (char *str)
{   
    int result; 
    
    result = 0;

    while (*str >= '0' && *str <= '9')
    {          
        result *= 10;
        result += *str - '0';
        str++;
    }
    return result;
}

int main (void)
{   
char c[] = "01234567ab109cd";
printf("%d\n", ft_atoi(c));
return 0;
}