#include <stdio.h>
#include <string.h>

int main()
{   char str[] = "Krishna Kant Sharma";
    char *ptr;

    ptr = strrchr(str, ' ');
    if (ptr != '\0')
    {
        int index = ptr - str;
        printf("The last ' ' is encountered at index %d.", index);
    }
    else{
        printf("The string does not contain the character ' '.\n");
    }
    
    
    return 0;
}