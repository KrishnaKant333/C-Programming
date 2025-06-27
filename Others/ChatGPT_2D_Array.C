#include <stdio.h>

void display(int arr[100][100], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[100][100];
    int rows, cols, i, j;

    printf("Enter the number of rows (max 100): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (max 100): ");
    scanf("%d", &cols);

    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The 2D array you entered is:\n");
    display(arr, rows, cols);

    return 0;
}
