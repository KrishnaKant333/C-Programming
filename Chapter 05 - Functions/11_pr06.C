#include <stdio.h>

int sum(int);
// Sum (n) = 1 + 2 + 3 + 4 + .... + n
// Sum (n) = sum(n-1) + n

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Sum of 1st %d natural numbers is %d", n, sum(n));
    return 0;
}
int sum(int n){
    if (n == 1){
        return 1;
    }
    return sum(n-1) + n;
}