#include <stdio.h>

int main()
{
    int i, count = 1;
    FILE *ptr;
    ptr = fopen("WriteFile.txt", "r");
    while(count<=3)
    {
        fscanf(ptr, "%d" ,&i);
        printf("%d\n", i);
        count++;
    }    
    // fscanf(ptr, "%d" ,&i);
    // printf("%d\t", i);
    // fscanf(ptr, "%d" ,&i);
    // printf("%d\t", i);
    // fscanf(ptr, "%d" ,&i);
    // printf("%d\t", i);
    fclose(ptr);
    return 0;
}