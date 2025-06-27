#include <stdio.h>

int main()
{
    int n;
    printf("Enter a natural number:\n");
    scanf("%d", &n);
    
    printf("The natural numbers from %d to 0 are:\n", n);

    for(n; n; n--){
        printf("%d\n", n);
    }
    printf("0");
    return 0;
}
//  3:36:18