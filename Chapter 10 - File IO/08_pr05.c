#include <stdio.h>

int main()
{
    FILE *ptr;
    int i;
    ptr = fopen("WriteFile.txt","r");
    fscanf(ptr, "%d", &i);
    ptr = fopen("WriteFile.txt", "w");
    fprintf(ptr, "%d", 2*i);
    fclose(ptr);
    return 0;
}