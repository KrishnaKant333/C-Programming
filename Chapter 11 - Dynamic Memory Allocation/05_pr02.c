#include <stdio.h>
#include <malloc.h>

int main()
{
    int * ptr;
    int n = 6;
    ptr = (int *) malloc(n * sizeof(int));
    printf("Enter 6 elements for the array:\n");
    for (int i = 0; i <= 5; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n");

    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}