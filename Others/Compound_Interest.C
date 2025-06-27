#include<stdio.h>
#include<math.h>

int main(){
    float principal, rate, time, interest, amount;
    
    printf("Enter the value of principal:\n", principal);
    scanf("%f", &principal);

    printf("Enter the rate of interest:\n", rate);
    scanf("%f", &rate);

    printf("Enter the time in years:\n", time);
    scanf("%f", &time);

    amount = principal * pow(1+(rate/100),time);
    interest = amount - principal;

    printf("Amount on %f for %f years at the rate of %f p.c.p.a is %f\n", principal, time, rate, amount);
    printf("The Compound Interest is %f\n", interest);

    return 0;
}