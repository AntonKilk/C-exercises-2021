#include <stdio.h>

int ft_iterative_power(int nb, int power)
{   
    int result;

    if (nb < 1)
    {
        return 0;
    }
    else if ( power == 0)
    {
        return 1;
    }
    else
    {   
        result = nb;
        while (power > 0)
        {   
            result *= nb;
            power--;
        }
    }
    return result;
}

int main(void)
{
    int nb = 2;
    int power = 8;
    printf("The power of %d for %d is %d\n", power, nb, ft_iterative_power(nb, power));
}