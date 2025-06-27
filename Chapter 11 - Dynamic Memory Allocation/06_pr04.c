#include <stdio.h>
#include <malloc.h>

int main()
{
    int * ptr;
    int i = 0;
    ptr = (int *) malloc(5 * sizeof(int));
    ptr[0] = 3; 
    ptr[1] = 9; 
    ptr[2] = 34; 
    ptr[3] = 41; 
    ptr[4] = 698;
    
    ptr = (int *) realloc(ptr, 10 * sizeof(int));
    ptr[5] = 275; 
    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
    printf("%d\n",ptr[4]);
    printf("%d\n",ptr[5]);
    return 0;
}