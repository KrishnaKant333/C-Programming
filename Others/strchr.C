// The strchr() function is a built-in C library function that searches 
// for the first occurrence of a specified character in a string. 

#include <stdio.h>
#include <string.h>

int main()
{   char str[] = "Krishna Kant Sharma";
    char *ptr;

    ptr = strchr(str, ' ');
    if (ptr != '\0')
    {
        int index = ptr - str;
        printf("The first ' ' is encountered at index %d.", index);
    }
    else{
        printf("The string does not contain the character ' '.\n");
    }
    
    
    return 0;
}