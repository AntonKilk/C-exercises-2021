#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 1)
    { 
        return 0;
    }
    else if (power == 1) 
    {
        return nb;
    }
    else
    {   
        return nb * ft_recursive_power(nb, power - 1);
    }
}

int main(void)
{
    int nb = 2;
    int power = 8;
    printf("The power of %d for %d is %d\n", power, nb, ft_recursive_power(nb, power));
}