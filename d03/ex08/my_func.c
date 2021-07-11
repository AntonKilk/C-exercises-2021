#include <stdio.h>

int my_func (int *arr, int length)
{   
    int ii, result;

    ii = 0;
    result = 0;
    while (ii < length)
    {   
        result *= 10;
        result += arr[ii];
        ii++;
    }
    return result;
}

int main (void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n", my_func(arr, 9)); 
}