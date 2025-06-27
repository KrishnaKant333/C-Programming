#include <stdio.h>

int second_largest(int arr[], int n)
{
    int max = arr[0];
    int max2 = arr[0];
    for (int i = 1; i < n; i++)
    {if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max)
        {
            max2 = arr[i];
        }
    }
    return max2;
}
int main()
{
    int n;
    printf("Enter the number of elements in your array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The second largest number in the array is: %d.\n", second_largest(arr, n));
    return 0;
}