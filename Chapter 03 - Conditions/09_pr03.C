#include <stdio.h>

int main(){
    
    int income;
    float tax;
    printf("Enter your income \n");
    scanf("%d", &income);

    if(income<250000){
        printf("Your income is less than 2.5 lakhs, so no tax for you\n");       
    }
    else if(income<500000 && income>250000){
        printf("Your income is between 2.5 lakhs and 5 lakhs\n");
        tax = tax + 0.05*(income-250000);       
    }
    else if(income<1000000 && income>500000){
        printf("Your income is between 5 lakhs and 10 lakhs\n");
        tax = tax + tax + 0.05*(500000-250000);
        tax = tax + 0.2*(income-500000);        
    }
    else{
        printf("Your income is above 10 lakhs\n");
        tax = tax + tax + 0.05*(500000-250000);
        tax = tax + 0.2*(1000000-500000);
        tax = tax + 0.3*(income-1000000);
    }
    printf("Total tax to be paid is %f\n", tax);

    return 0;
}