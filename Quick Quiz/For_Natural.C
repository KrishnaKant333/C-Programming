#include <stdio.h>

int main(){

    int i, n;
    printf("Enter the value of a natural no.:\n", n);
    scanf("%d", &n);
    printf("The natural numbers from 1 to %d are :\n", n);
    for(i = 1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    return 0;    
}
// 3:31:59 YES!