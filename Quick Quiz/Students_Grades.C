#include <stdio.h>

int main()
{
    int grade;
    printf("Enter Your Marks:\n");
    scanf("%d", &grade);

    if(grade>=90){
        printf("You have passed with A grade");
    }

    else if(grade>=80){
        printf("You have passed with B grade");
    }

    else if(grade>=70){
        printf("You have passed with C grade");
    }
    
    else if(grade>=60){
        printf("You have passed with D grade");
    }

    else{
        printf("You have passed with F grade");
    }
    return 0;

}