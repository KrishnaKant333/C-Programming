#include <stdio.h>

int main()
{   char str1[] = "Harry"; // single quote = character; double quote = string
    for (int i = 0; i < 6; i++)
    {
        printf("%c", str1[i]);
    }
    return 0;
}