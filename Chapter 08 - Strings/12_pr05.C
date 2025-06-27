// Create own Strcpy

#include <stdio.h>
#include <string.h>

void mystrcpy(char *source, char *target)
{
    int i = 0;
    while (source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}

int main()
{
    char source[] = "Krishna";
    char target[50];
    mystrcpy(source, target);
    printf("Target is %s.\n", target);
    return 0;
}