#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int ft_sort_integer_table(int *tab, int size)
{
    int ii, jj, temp; 

    ii = 0;
    while (ii < size - 1)
    {   
        jj = size - 1;
        while (jj > ii)
        {   
            if (tab[jj-1] > tab[jj])
            {
                ft_swap(&tab[jj-1], &tab[jj]);
            }
            jj--;            
        }
        ii++;
    }
    return *tab;
}

int main(void)
{
    int arr[10] = {1, 42, 21, 5, 634 ,2, 21, -1, 25, -10};
    int i = 0;
    while (i < 10)
    {
        printf("%d \n", arr[i]);
        i++;
    }
    ft_sort_integer_table(arr, 10);

    printf("\nSorted array: \n");
    i = 0;
    while (i < 10)
    {
        printf("%d \n", arr[i]);
        i++;
    }
}