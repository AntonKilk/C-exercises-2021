#include<stdio.h>

int ft_is_prime(int nb)
{   
    int ii;

    if (nb < 3)
    {
        return 0;
    }
    
    ii = 3;
    while(ii < nb)
    {   
        if (nb%ii == 0)
        {
            return 0;
        }
        ii++;
    }
    return 1;
}

int main(void)
{
    int nb = 15;
    printf("%d\n", ft_is_prime(nb));
}