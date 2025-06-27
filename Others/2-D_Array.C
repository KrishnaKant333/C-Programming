// Create a 2-d array by taking input from the user. Write a display functiion
// to print the content of this 2-d array on the screen.

#include <stdio.h>

void display(int arr[][100], int, int);

int main()
{
    int rows, cols;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns:\n");
    scanf("%d", &cols);

    int arr[100][100];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the element at (%d,%d):\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    display(arr, rows, cols);
    return 0;
}

void display(int arr[][100], int rows, int cols)
{
    printf("The 2D array is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}