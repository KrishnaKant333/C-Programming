#include <stdio.h>

int positive_number(int arr[], int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > 0){
            count++;
        }
    }
    return count;    
}

int main()
{   int n;
    printf("Enter the size of your array: \n");
    scanf("%d", &n);
    int my_array[n];
    printf("Enter the values of your array:\n");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &my_array[j]);
    }

    int size = sizeof(my_array) / sizeof(int);
    int positive_no = positive_number(my_array, size);
    printf("There are %d positive numbers in the given array.\n", positive_no);
    return 0;
}