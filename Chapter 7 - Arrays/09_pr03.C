#include <stdio.h>

int main()
{   int arr[10];
    printf("The table of 5 is as follows :\n");
    for (int i = 1; i <= 10; i++)
    {
        arr[i] = 5*i;
        printf("5 x %d = %d.\n", i, arr[i]);
    }
    return 0;
}