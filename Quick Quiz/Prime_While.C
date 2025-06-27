#include <stdio.h>

int main()
{
    int i = 2;
    int n, isPrime = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
        i++;
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