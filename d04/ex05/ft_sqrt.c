#include <stdio.h>

int ft_sqrt(int nb)
{
    int ii, sqrt;

    ii = 0;
    sqrt = 0;
    while(sqrt <= nb)
    {       
        if (sqrt == nb)
        {
            return ii;
        }    
        ii++;
        sqrt=ii*ii;
    }
    return 0;
}

int main(void)
{
    int nb = 0;
    printf("The sqrt of %d is %d\n", nb, ft_sqrt(nb));
}