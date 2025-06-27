#include <stdio.h>
#include <string.h>

int main()
{   char source[55] = "Krishna ";
    char target[] = "is a nice boy";
    strcat(source, target); // source + target will be assigned to source(roughly)
    // strcat will only update the source string; the target string will remain unchanged
    printf("The source string is: \n%s.",source);
    return 0;
}