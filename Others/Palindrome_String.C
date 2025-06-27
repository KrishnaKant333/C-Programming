#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

void reverse(char *str, char *rev)
{   
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
       rev[i] = str[length - i - 1];
    }
    rev[length] = '\0';
}

void palindrome(char *str, char *rev)
{
    int length = strlen(str);
    int cmp = 0;
    for (int i = 0; i < length; i++) {
        if (tolower(str[i]) != tolower(rev[i])) {
            cmp = 1;
            break;
        }
    }
    if (cmp == 0) {
        printf("This is a palindrome string!\n");
    } else {
        printf("This is not a palindrome string!\n");
    }
}


int main()
{   
    char str[MAX_LENGTH];
    char rev[MAX_LENGTH];
    printf("Enter Your String:\n");
    fgets(str, MAX_LENGTH, stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("The string you entered is: %s\n", str);
    reverse(str, rev);
    printf("The Reversed String is: %s\n", rev);
    palindrome(str, rev);
    return 0;
}