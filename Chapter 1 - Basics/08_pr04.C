#include <stdio.h>
int main()
{
    // int P = 100;
    // int r = 6;
    // int t = 4;

    int P;
    int t;
    float r;

    printf("Enter the value of principal amount\n");
    scanf("%d", &P);

    printf("Enter the number of years\n");
    scanf("%d", &t);

    printf("Enter the rate of simple interest\n");
    scanf("%f", &r);

    printf("Required Simple Interest is %f\n", P*r*t/100);

    float I = P*r*t/100;
    float A = P+I;
    printf("Total Amount is %f\n", A);
    // finally amount :')
    return(0);
}