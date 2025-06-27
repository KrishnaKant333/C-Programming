#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    printf("Enter the side lenght of the square:\n");
    scanf("%lf", &a);
    printf("The area of the square is %lf", pow(a, 2));
    return 0;
}