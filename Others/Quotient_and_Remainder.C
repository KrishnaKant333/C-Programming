#include<stdio.h>

int main(){
    
    int a;
    printf("Enter the value of Dividend:\n", a);
    scanf("%d", &a);
    int b;
    printf("Enter the value of Divisor:\n", b);
    scanf("%d", &b);
    
    printf("%d can be divided by %d in %d times\n", a, b, a/b);
    printf("%d when divided by %d gives remainder %d", a, b, a%b);

    return 0;
}