#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result, ii;

    if (nb < 0)
    {
        return 0;
    }

    result = 1;
    ii = 1;
    while (ii <= nb)
    {   
        result *= ii;
        ii++;
    }
    
    return result;
}

int main(void)
{
    int nb = 0;
    printf("The factorial of %d number is %d\n", nb, ft_iterative_factorial(nb));
}