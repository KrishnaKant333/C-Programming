#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("SampleText.c","r");
    if(ptr==0)
    {
        printf("The File does not exist\n");
    }
    else
    {
        printf("The File exists\n");
    }

    ptr = fopen("SampleFile.txt","r");
    if(ptr==0)
    {
        printf("The File does not exist\n");
    }
    else
    {
        printf("The File exists\n");
    }
    fclose(ptr);
    return 0;
}