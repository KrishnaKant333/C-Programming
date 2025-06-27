#include <stdio.h>
#include <string.h>

int main()
{   char st[6];
    printf("Enter the string(lenght 5) you want to input using percent c:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &st[i]);
        fflush(stdin); // removes the "Enter" key
    }
    st[5] = '\0';
    printf("Comparing this string with HARRY gives %d", strcmp("HARRY", st));
    return 0;
}