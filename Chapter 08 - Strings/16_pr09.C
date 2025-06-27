#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

void check(char *str, char target)
{
    int i = 0;
    char c;
    while (str[i] != '\0')
    {
        c = toupper(str[i]);
        if (c == toupper(target) && c != '\n')
        {
            printf("The character is present in your string!\n");
            break;
        }
        i++;
    }
    if (str[i] == '\0')
    {
        printf("The character is not present in the string!\n");
    }
}

int main()
{
    char str[MAX_LENGTH];
    char target;
    printf("Enter the string:\n");
    fgets(str, MAX_LENGTH, stdin);
    printf("Enter the character u want to look for in your string:\n");
    scanf("%c", &target);
    check(str, target);
    return 0;
}