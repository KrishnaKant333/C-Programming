#include <stdio.h>

int main()
{ 
    // int a = 3;
    // int b = 7;

    int a;
    int b;
    
    printf("Enter the value of length\n");
    scanf("%d", &a);
    printf("Enter the value of breadth\n");
    scanf("%d", &b);

    printf("The area of the rectangle is %d", a*b);
    return 0;
    // Therefore, the area of the rectangle is calculated!
}