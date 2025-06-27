#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("fgetcputc.txt","w");
    // fputc('c',ptr);

    ptr = fopen("fgetcputc.txt","r");
    char c = fgetc(ptr);
    printf("The value of the character is %c",c);
    fclose(ptr);
    return 0;
}