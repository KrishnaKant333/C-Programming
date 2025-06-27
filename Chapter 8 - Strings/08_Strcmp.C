#include <stdio.h>
#include <string.h>

int main()
{   char source[] = "Krishna"; 
    char target[] = "Yash";    
    // strcmp compares the ascii value of two strings
    // so upon comparing if 1st string > 2nd string then -ve value
    // and if 1st < 2nd --> +ve value
    // if 1st == 2nd --> 0
    printf("The strcmp returns %d.",strcmp(source, target));
    return 0;
}