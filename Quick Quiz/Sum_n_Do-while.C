#include <stdio.h>

int main()
{
    int n = 1;
    int sum = 0;
    do{
        sum += n;
        n++;
    }while(n<=10);
    printf("The sum of first 10 natural numbers is %d", sum);

    return 0;
}
// 4:00:00