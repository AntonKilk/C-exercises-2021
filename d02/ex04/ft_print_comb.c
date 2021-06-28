#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
    int x = 0;
    int y = 1;
    int z = 2;

    while (x <= 9)
    {
        //if (x != z && x != y && y != z)
        //{
        printf("%d%d%d", x, y, z);
        printf(", ");
        //}
         
        while (y < 8)
        {
            //if (y != z && y != x)
            //{
                printf("%d%d%d", x, y, z);
                printf(", ");
            //}
            y++;
            while (z < 9)
            {
                //if (y != z && z != x)
                //{
                printf("%d%d%d", x, y, z);
                printf(", ");
                //}
                z++;
            }     
        }
        x++;  
    }
}

int main(void)
{   
    ft_print_comb();
    return 0;
}