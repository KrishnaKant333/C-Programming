#include <stdio.h>

int main()
{
    // int n = 3;
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("The table of %d is as follows:\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}