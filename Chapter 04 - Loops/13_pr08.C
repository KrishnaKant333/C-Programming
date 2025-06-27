#include <stdio.h>

int main()
{
    int factorial = 1;
    int n;
    printf("Enter a number :\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The value of the factorial of %d is %d.\n", n, factorial);    
    return 0;
}