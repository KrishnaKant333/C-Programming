// C program to take input from user as 4, and give an output of 1,2,3,4
// using do-while loop

#include<stdio.h>

int main(){
    int n, i = 1;
    printf("Enter a natural number :\n");
    scanf("%d", &n);
    printf("The natural numbers from 1 to %d are:\n", n);

    do{
        printf("%d\n", i);
        i++;
    }while(i<=n);
    return 0;
}
// 3:24:37