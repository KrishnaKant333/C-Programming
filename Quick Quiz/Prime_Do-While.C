#include <stdio.h>

int main()
{
    int i = 2, n, isPrime = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    do{
        if(n%i == 0){
            isPrime = 0;
            break;
        }
        i++;
    }while(i<n);
    if(isPrime){
        printf("This is a prime number\n");
    }
    else{
        printf("This is not a prime number\n");
    }
    return 0;
}