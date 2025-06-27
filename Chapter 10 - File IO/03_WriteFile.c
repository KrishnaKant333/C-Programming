#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("WriteFile.txt","w");
    int i = 8993247;
    fprintf(ptr, "%d", i);
    fclose(ptr);
    return 0;
}