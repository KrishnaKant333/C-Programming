#include <stdio.h>

void swap(int* , int*);

int main()
{   int a = 5;
    int b = 7;
    // in main function value doesnt change
    printf("Values of a & b before swap: %d & %d\n", a, b);
    swap(&a, &b);
    printf("Values of a & b after swap: %d & %d\n", a, b);
    return 0;
}

void swap(int *aptr, int *bptr){
    // in swap function value changes
    // printf("Values of a & b before swap: %d & %d\n", a, b);
    int temp;
    temp = *aptr; // a = 5, temp = 5, b = 7
    *aptr = *bptr; // a = 7, temp = 5, b = 7
    *bptr = temp; // a = 7, temp = 5, b = 5
    // printf("Values of a & b after swap: %d & %d\n", a, b);
}