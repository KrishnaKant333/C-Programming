#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i; // int *something = pointer to integer
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    return 0;
}