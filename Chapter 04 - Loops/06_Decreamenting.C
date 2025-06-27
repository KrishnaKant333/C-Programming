#include <stdio.h>

int main()
{
    for (int i = 5; i; i--) // here i is a non zero value i.e. true which will be executed until i=0 due to i--
    {
        printf("The value of i is %d\n", i);
    }
    
    return 0;
}