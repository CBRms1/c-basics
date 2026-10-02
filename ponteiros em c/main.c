#include <stdio.h>

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int *array_ptr = &array[0];

    for (int i = 0; i < 5; i++)
    {
        *(array_ptr + i) += 10;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("+10 in array pos %d: %d\n", i, array[i]);
    }



    return 0;
}