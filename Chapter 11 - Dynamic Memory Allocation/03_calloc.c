#include <stdio.h>
#include <malloc.h>

int main()
{  
    int * ptr;
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    ptr = (int *) calloc(n, sizeof(int));
    ptr[2] = 47; // if not predefined, calloc assigns each memory block 
    // with a initial value of 0
    printf("%d",ptr[2]);
    return 0;
}