#include <stdio.h>

int main()
{
    // int n = 3;
    int n = 10;
    printf("The reversed table of %d is as follows:\n", n);
    for (int i = 10; i > 0; i--)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}