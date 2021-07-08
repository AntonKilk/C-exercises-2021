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
    int length, ii; 
    
    length = ft_strlen(str);
    ii = 0;

    while (ii < length)
    {   
        if( str[ii] > 47 && str[ii] < 58)
        {
            printf("%d", str[ii] - '0'); 
        }
        ii++;
    }

    return 1;
}
int main (void)
{   
char c[] = "123435abcd";
printf("%d\n", ft_atoi(c));
return 0;
}