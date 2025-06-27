#include <stdio.h>

void AvgAndSum(float, float, float *, float *);

int main()
{
    float a;
    float b;
    float sum, avg;
    printf("Enter two numbers:\n");
    scanf("%f\n", &a);
    scanf("%f", &b);
    AvgAndSum(a, b, &sum, &avg);
    printf("The value of sum is %f and the value of average is %f", sum, avg);
    return 0;
}

void AvgAndSum(float a, float b, float *ptr1, float *ptr2)
{
    *ptr1 = a + b;
    *ptr2 = (a + b) / 2;
}