#include <stdio.h>

int main()
{   char ch1[45];
    printf("Enter your name and see the magic:\n");
    gets(ch1); // gets can take multi word string unlike scanf
    // printf("%s.", ch1);
    puts(ch1); // puts can print and then break the line as well like \n
    printf("Done printing string."); // only prints
    return 0;
}