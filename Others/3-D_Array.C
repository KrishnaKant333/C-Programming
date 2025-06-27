#include <stdio.h>

int main()
{
    int depth, cols, rows;
    printf("Enter the depth:\n");
    scanf("%d", &depth);
    printf("Enter the number of columns:\n");
    scanf("%d", &cols);
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);

    int arr[depth][cols][depth];

    for (int i = 0; i < depth; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < rows; k++)
            {
                printf("Enter the element at (%d,%d,%d):\n", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    for (int i = 0; i < depth; i++)
    {
        printf("Level %d:\n", i);
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < rows; k++)
            {
                printf("%f ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}