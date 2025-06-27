#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Enter a:\n");
    scanf("%f", &a);

    printf("Enter b:\n");
    scanf("%f", &b);

// pow(first,second) : second becomes the power of first
    
    c = pow(a,b);

    printf("The value of c is %f:\n", c);
    return 0;
}