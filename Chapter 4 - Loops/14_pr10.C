#include <stdio.h>

int main()
{
    int n, isPrime = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("This is a prime number");
    }
    else
    {
        printf("This is not a prime number");
    }

    return 0;
}