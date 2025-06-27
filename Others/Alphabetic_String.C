#include <stdio.h>
#include <string.h>

void alphab(const char *arr[], int n)
{
    const char *temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    const char *str[] = {"Suman", "Kamini", "Rachana", "Krishna"};
    int n = sizeof(str) / sizeof(str[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s ", str[i]);
    }
    printf("\n");

    alphab(str, n);

    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s ", str[i]);
    }
    return 0;
}