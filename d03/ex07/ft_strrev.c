#include <stdio.h>

int string_length(char *str)
{   
    int length;

    length = 0;
    while (*(str + length) != '\0')
    {
        length++;
    }
    return length;
}

char *last_letter(char *str)
{
    while (*str != '\0')
    {   
        str++;
    }
    return str-1;
}

void ft_swap(char *a, char *b)
{   
    char temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

char *ft_strrev(char *str)
{   
    char temp, *first_p, *last_p;
    int l;

    l = string_length(str);
    first_p = str;
    last_p = last_letter(str);
    while (first_p < last_p)
    {   
        ft_swap(first_p, last_p);
        first_p++;
        last_p--;
    }
    return str;
}

int main (void)
{   
    // Get the string
    char str[100] = "123456789";
    printf("Length is: %d\n", string_length(str));

 
    printf("At first the string is: %s\n", str);
  
    // Reverse the string
    ft_strrev(str);
  
    // Print the result
    printf("Reverse of the string: %s\n", str);
      


    return 0;
}