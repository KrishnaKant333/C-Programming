#include <stdio.h>

int main()
{   int rows;
    printf("Enter the number count:\n");
    scanf("%d", &rows);

    int mulTable[100][10];
    int num[100];
    int k = 0;
    printf("Enter the numbers:\n");
    for (int k = 0; k < rows; k++)
    {
        scanf("%d", &num[k]);
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mulTable[i][j] = num[i] * (j + 1);
        }
    }

    for (int i = 0; i < rows; i++)
    {   printf("Table of %d is: ", *(&num[k]));
        k++;
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", mulTable[i][j]);
        }
        printf("\n");
    }

    return 0;
}
