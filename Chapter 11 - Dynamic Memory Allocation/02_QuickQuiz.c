#include <stdio.h>
#include <malloc.h>

int main()
{
    float * ptr;
    int n = 5;
    ptr = (float *) malloc(n * sizeof(float));
    ptr[0] = 3.5; 
    ptr[1] = 9.2; 
    ptr[2] = 34.8; 
    ptr[3] = 4.1; 
    ptr[4] = 6.98; 
    printf("%f",ptr[2]);
    return 0;
}