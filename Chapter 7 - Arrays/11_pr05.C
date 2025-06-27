#include <stdio.h>

int reverse(int a[], int n){
//swap 0 with n-1
//swap 1 with n-2
//swap 2 with n-3
// .
//swap i with n-i-1
// .
// till n/2 - 1
int temp;
for (int i = 0; i < n/2; i++)
{
    temp = a[i]; 
    a[i] = a[n-i-1];
    a[n-i-1] = temp;
}
}
void display(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}
int main()
{   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("The array is:\n");
    display(arr, 10);
    reverse(arr, 10);
    printf("The reversed array is:\n");
    display(arr, 10);
    return 0;
}