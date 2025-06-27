#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

void encrypt(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != '\n')
        {
            str[i] += 1;
        }
        i++;
    }
    str[i] = '\0';
}

void decrypt(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != '\n')
        {
            str[i] -= 1;
        }
        i++ ;
    }
    str[i] = '\0';
}

int main()
{
    char str[MAX_LENGTH];
    printf("Enter your string:\n");
    fgets(str, MAX_LENGTH, stdin);
    int len = strlen(str);
    encrypt(str);
    printf("The encrypted string is: %s\n", str);
    decrypt(str);
    printf("The Decrypted String is: %s\n", str);

    return 0;
}