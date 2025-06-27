#include <stdio.h>
int main()
{
    // (0C * 9/5) + 32 = 32F
    int c = 4;
    float f = c * (9.0/5.0) + 32;
    printf("The value of temperature is Fahrenheit is %f", f);
    return(0);
}