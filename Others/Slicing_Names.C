#include <stdio.h>
#include <string.h>

void slice(char *str, int start, int end, char *result)
{
    int j = 0;
    for (int i = start; i < end && str[i] != '\0'; i++)
    {
        result[j++] = str[i];
    }
    result[j] = '\0';
}

int main()
{
    char name[50];
    printf("Enter your full name:\n");
    gets(name);
    char first_name[50], last_name[50];

    int space_index = strrchr(name, ' ') - name;
    // strchr --> From the starting!
    // strrchr --> From the end!

    slice(name, 0, space_index, first_name);

    slice(name, space_index + 1, strlen(name), last_name);

    printf("First Name : %s\n", first_name);
    printf("Last Name : %s\n", last_name);
    return 0;
}
