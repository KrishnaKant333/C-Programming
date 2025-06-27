// Write a program to generate multiplication table of a given number in text
// format. Make sure that the file is readable and well formatted.
#include <stdio.h>
#define max_length 500
int main()
{
    FILE *ptr;
    ptr = fopen("Table.txt","w");
    int i,n; 
    printf("Enter the number:\n");
    scanf("%d",&n);
    char line[max_length];
    sprintf(line, "Multiplication Table of %d:\n",n);
    fprintf(ptr, "%s",line);
    for(i = 1 ; i<=10 ; i++)
    {   
        fprintf(ptr, "%d\n", n*i);
    }
    fclose(ptr);
    return 0;
}