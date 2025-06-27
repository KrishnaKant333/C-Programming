#include <stdio.h>
#include <string.h>

int vowel(char *str)
{
    int vowel = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
    }
    return vowel;
}

int main()
{
#define MAX_LENGTH 100
    char str[MAX_LENGTH];
    printf("Enter your string: \n");
    fgets(str, MAX_LENGTH, stdin);
    printf("The number of vowels in your string is %d.\n", vowel(str));
    return 0;
}