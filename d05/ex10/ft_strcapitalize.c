#include <stdio.h>


char *ft_strcapitalize(char *str)
{   
    char *s = str;
    int outside_of_word = 1;
    while (*s != '\0')
    {   
        if (outside_of_word == 1)
        {   
            // if current symbol is alphanumeric
            
            if ((*s >= '0' && *s <= '9') || (*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
            {   
                printf("currently in 1\n");
                outside_of_word = 0;
                if (*s >= 'a' && *s <= 'z')
                {   
                    printf("currently in 2\n");
                    *s += 'A' - 'a';
                }
            }
            printf("do nothing\n");
            // otherwise do nothing
        }
        if (outside_of_word == 0)
        {    
            // if current symbol is alphanumeric
            if ((*s >= '0' && *s <= '9') || (*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
            {   
                if (*s >= 'A' && *s <= 'Z')
                    {
                        printf("currently in 3\n");
                        *s += 'a' - 'A';
                    }
            }
            else
            {
                printf("currently in 4\n");
                outside_of_word = 1;
            }
        }
        s++;
    }
    return str;
}

int main(void)
{   
    char str[] = "ab cde 12 fgh 123Hello456World HELLO, WORLD";
    printf("%s", ft_strcapitalize(str));
}