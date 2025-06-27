#include <stdio.h>
#include <malloc.h>

int main()
{  
    int * ptr;
    int n;
    scanf("%d",&n);
    ptr = (int *) malloc(n * sizeof(int));
    ptr[2] = 47;
    printf("%d",ptr[2]);
    return 0;
}