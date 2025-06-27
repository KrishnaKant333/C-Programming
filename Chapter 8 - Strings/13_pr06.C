#include <stdio.h>

int main()
{   char name[] = "Krishna";
    for (int i = 0; i < 7; i++)
    {
        name[i]++;
    }
    printf("The string is %s.", name);
    
    return 0;
}