#include<stdio.h>

int sum(int, int);

int main()
{
    printf("The value of 5 + 7 is %d.\n", sum(5,7));        
    return 0;
}

int sum(int a, int b){
    return a + b;
} 