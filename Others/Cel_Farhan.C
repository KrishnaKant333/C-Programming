#include <stdio.h>
int main(){
    float c, f;
    printf("Enter temperature in celsius:\n");
    scanf("%f", &c);

    // c/5 = (f-32)/9

    f = (9*c)/5 + 32;
    printf("The temperature in fahrenheit is : %f", f);
    return 0;
}