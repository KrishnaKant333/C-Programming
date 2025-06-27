#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 100

void uppercase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {   strtok(str, "\n");
        str[i] = toupper(str[i]);
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char str[MAX_LENGTH];
    printf("Enter The string : ");
    fgets(str, MAX_LENGTH, stdin);
    uppercase(str);
    printf("The string in uppercase is: %s.\n", str);
    return 0;
}