#include <stdio.h>

int main()
{   // Store marks of 8 students:
    // int a1, a2, a3, a4, a5, a6, a7, a8;
    // a1 = 38;
    // a2 = 58;
    // and so on

    // Better way to store marks of 8 students:
    int a[8];
    a[0] = 28; // An array index starts with 0
    a[1] = 86;
    a[2] = 78;
    a[3] = 84;
    a[4] = 34;
    a[5] = 58;
    a[6] = 48;
    a[7] = 35;

    printf("The value of student number 0 is %d\n", a[0]); 
    printf("The value of student number 1 is %d\n", a[1]); 
    printf("The value of student number 2 is %d\n", a[2]); 
    printf("The value of student number 3 is %d\n", a[3]); 
    printf("The value of student number 4 is %d\n", a[4]); 
    printf("The value of student number 5 is %d\n", a[5]); 
    printf("The value of student number 6 is %d\n", a[6]); 
    printf("The value of student number 7 is %d\n", a[7]); 
    return 0;
}