#include <stdio.h>

int main()
{
    int marks[3] = {1, 2, 4};
    // &marks[0] => marks [IMPORTANT]
    // int *ptr = &marks[0];
    int *ptr = marks; // the name of the array will point to the first element of the array
    *ptr = 89;
    ptr++; //---------->  integer pointer will point to the next integer +4bytes
    *ptr = 65;
    ptr++; //---------->  integer pointer will point to the next integer +4bytes
    *ptr = 82;

    printf("The marks scored by student 0 is %d.\n", marks[0]);
    printf("The marks scored by student 1 is %d.\n", marks[1]);
    printf("The marks scored by student 2 is %d.\n", marks[2]);
    return 0;
}