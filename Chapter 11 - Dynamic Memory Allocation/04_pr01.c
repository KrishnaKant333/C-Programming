#include <stdio.h>
#include <malloc.h>

int main()
{
    int * ptr;
    int n = 6;
    ptr = (int *) malloc(n * sizeof(int));
    ptr[0] = 3; 
    ptr[1] = 9; 
    ptr[2] = 34; 
    ptr[3] = 41; 
    ptr[4] = 698; 
    ptr[5] = 275; 
    printf("%d",ptr[2]);
    return 0;
}