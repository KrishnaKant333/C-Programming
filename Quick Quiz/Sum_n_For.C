#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("The sum of first 10 natural numbers is ");
    for (int n = 1; n <= 10; n++)
    {
        sum += n;
    }
    printf("%d", sum);

    return 0;
}
// 4:00:00