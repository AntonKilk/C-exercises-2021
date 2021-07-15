#include<stdio.h>

int ft_find_next_prime(int nb)
{   
   int ii, prime;

   ii = 2;
   prime = nb + 1;
   while (ii < prime)
   {    
       if(prime%ii == 0)
       {
           prime++;
           ii = 2;
       }
       ii++;
   }
   return prime;
}

int main(void)
{
    int nb = 22414155;
    printf("%d\n", ft_find_next_prime(nb));
}