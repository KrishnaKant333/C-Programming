#include <stdio.h>

void common(int arr1[], int arr2[], int n1, int n2)
{
    printf("Common elements:\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break;
            }
            
        }
        
    }
    
}

int main()
{   int arr1[] = {1,35,2,4,63,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {11,532,44,63,51,25,65,35};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    common(arr1, arr2, n1, n2);
    return 0;
}