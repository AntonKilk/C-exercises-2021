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

int main (void)
{   
    char s[] = "HELL0 w0rld!";
    int l = ft_strlen(s);
    printf("The length of the string is: \n %d", l);
    return 0;
}