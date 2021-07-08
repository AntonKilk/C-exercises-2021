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

char *ft_strrev(char *str)
{   
    char temp, *first_p, *last_p;
    int l, ii;

    first_p = str;
    last_p = str;
    ii = 0;
    l = string_length(str);
    while (ii < l)
    {   
        last_p++;
        ii++;
    }
    
    ii = 0;
    while ( ii < l/2)
    {   
        temp = *last_p;
        *last_p= *first_p;
        *first_p = temp;
        first_p++;
        last_p--;
        ii++;
    }

    ii = 0;
    while (ii < l)
    {
        str[ii]++;
        ii++;

    }
    
    return str;
}

int main (void)
{   
    // Get the string
    char str[100] = "Hello, World!";
    printf("Length is: %d\n", string_length(str));

 
    printf("At first the string is: %s\n", str);
  
    // Reverse the string
    ft_strrev(str);
  
    // Print the result
    printf("Reverse of the string: %s\n", str);
      


    return 0;
}