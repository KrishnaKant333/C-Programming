#include<stdio.h>

int main(){
    int age = 17;
    int placecode = 12;
    
    // Scenario 1 : (Right way)
    if(age>=18){
        printf("You are elligible to drive\n");
    }

    else if(age>=15){
        printf("You are not elligible to drive but we will check for a toy vehicle for you\n");
    }

    else{
        printf("Sorry, You are a kid and cannot drive\n");
    }

    // Scenario 2 : (Wrong way)
    // if(age>18){
    //     printf("You are elligible to drive\n");
    // }

    // if(age>15){
    //     printf("You are not elligible to drive but we will check for a toy vehicle for you\n");
    // }

    // if(age<=15){
    //     printf("Sorry, You are a kid and cannot drive\n");
    // }
    return 0;
}