#include <stdio.h>

int main()
{   //char str1[] = {'H', 'a', 'r', 'r', 'y', '\0'}; --> Lengthy
    char str1[] = "Harry"; // single quote = character; double quote = string
    printf("%s", str1);
    return 0;
}