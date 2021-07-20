#include <stdio.h>
#include <string.h>

int strncmp2(char *s1, char *s2)
{   
    while (*s2 != '\0')
    {   
        if( *s1 != *s2)
        {   
            break;
        }
        s1++;
        s2++;
    }
    int result;
    if (*s2 == '\0')
        result = 0;
    else
        result = 1;
    return result;    
} 

char *ft_strstr(char *str, char *to_find)
{   
    while (*str != '\0')
    {   
        char *s1 = str;
        char *s2 = to_find;
        while (*s2 != '\0')
        {   
            if( *s1 != *s2)
            {   
                break;
            }
            s1++;
            s2++;
        }
        if (*s2 == '\0')
            return str;
        str++;
    }
    return 0; 
}

int main(void)
{
    char haystack[20] = "xhello!";
    char needle[10] = "hell";

    printf("The substring is: %s\n", ft_strstr(haystack, needle));
    printf("The substring is: %s\n", strstr(haystack, needle));
    return 0;
}