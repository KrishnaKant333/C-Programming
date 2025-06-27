#include <stdio.h>
int fib(int);
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("The %dth element of fibonacci series is %d", n, fib(n));
    return 0;
}

int fib(int n)
{
    if(n == 1 || n == 2)
	{
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
