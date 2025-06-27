#include <stdio.h>
#include <string.h>

void reverse(char *str)
{   
    int length = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
}

int main()
{   
    #define MAX_LENGTH 100
    char str[MAX_LENGTH];
    printf("Enter Your String:\n");
    fgets(str, MAX_LENGTH, stdin);
    printf("The string you entered is:\n%s", str);
    reverse(str);
    printf("The Reversed String is:\n%s", str);
    return 0;
}