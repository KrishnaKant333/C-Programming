#include <stdio.h>

int main()
{
    int n;
    int i = 1, factorial = 1;
    printf("Enter a number :\n");
    scanf("%d", &n);
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %d.\n", n, factorial);
    return 0;
}
// 4:06:36  