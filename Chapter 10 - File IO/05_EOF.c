#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("SampleFile.txt", "r");
    char ch;
    printf("The contents of the file are :\n");
    while(ch!=EOF)
    {
        ch = fgetc(ptr);
        if(ch!=EOF)
        {
            if(ch != ' ')
            {
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }
        }
    }
    
    return 0;
}