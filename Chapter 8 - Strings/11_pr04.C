// Write a function slice() to slice a string. It should change the original
// string such that it is now the sliced string. Take m and n as the start and
// ending point for slice.

#include <stdio.h>
#include <string.h>

void slice(char str[], int m, int n)
{   int len = strlen(str);
    if (m<0 || n>len || m>n)
    {
        printf("Invalid slice range\n");
        return;
    }
    for (int i = m; i < n && str[i] != '\0'; i++)
    {
        str[i-m] = str[i];
    }
    str[n-m] = '\0';
}

int main()
{   char str[] = "Krishna Kant Sharma";
    slice(str, 0, 12);
    printf("Your first name is %s.\n", str);
    return 0;
}