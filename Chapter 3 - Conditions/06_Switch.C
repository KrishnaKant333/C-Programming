#include<stdio.h>

int main(){
    // int age = 24;
    int age = 36;
    switch (age)
    {
    case 24:
        printf("You are 24\n");
        break;
    case 25:
        printf("You are 25\n");
        break;
    case 26:
        printf("You are 26\n");
        break;
    case 27:
        printf("You are 27\n");
        break;
    case 28:
        printf("You are 28\n");
        break;
    
    default:
        printf("No cases matched");
        break;
    }
    return 0;
}