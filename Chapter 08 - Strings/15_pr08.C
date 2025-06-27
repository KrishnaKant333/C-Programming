#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int occurence(char *str, char target)
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == target && str[i] != '\n')
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{   char target;
    char str[MAX_LENGTH];
    printf("Enter your string:\n");
    fgets(str, MAX_LENGTH, stdin);
    printf("Enter the letter u want to check the occurence of:\n");
    scanf("%c", &target);
    int count = occurence(str, target);
    if (count == 0)
    {
        printf("The character u entered is not present in the string!");
    }
    else{
        printf("The letter u entered comes %d times in your string.\n", count);
    }
    
    return 0;
}