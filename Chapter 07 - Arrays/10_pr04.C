#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    printf("Enter a number :\n");
    scanf("%d", &n);
    printf("The table of %d is as follows :\n", n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
        printf("%d x %d = %d.\n", n, (i + 1), arr[i]);
    }
    return 0;
}