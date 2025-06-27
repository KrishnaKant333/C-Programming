#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("SampleFile.txt","r");
    char ch;
    fscanf(ptr, "%c", &ch);
    printf("The character ch is %c", ch);
    fclose(ptr);
    return 0;
}