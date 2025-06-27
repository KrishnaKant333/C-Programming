#include <stdio.h>
int main(){
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);
    // & --> ampersand ("address of" operator)  
    printf("The value of x is %d\n", x);

    float y;
    printf("Enter a decimal number:\n");
    scanf("%f", &y);
    printf("The value of y is %f", y);
    return 0;    
}