#include <stdio.h>
#include <string.h>

int main()
{   char source[] = "Harry";
    char target[45]; // make sure the target string has sufficient character limit to hold the contents of any other string
    strcpy(target, source);    // source copied to target
    printf("The target string is %s.",target);
    return 0;
}