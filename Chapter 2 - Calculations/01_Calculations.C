#include <stdio.h>

int main()
{
    // Wont work : (if int)
    // int a = 3.0/9;
    // printf("The value of a is %d", a);

    float a = 3.0/9;
    printf("The value of a is %f", a);
    return 0;
}