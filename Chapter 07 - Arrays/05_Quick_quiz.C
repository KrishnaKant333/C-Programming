#include <stdio.h>

int main()
{
    int i = 5;
    int *ptr = &i;
    printf("The value of i is %d\n", i);
    printf("The value of ptr %u\n", ptr);
    printf("The address of i is %u\n", &i);
    ptr = ptr + 1;
    printf("The value of ptr after ptr is increased is %u\n", ptr);
    ptr = ptr - 1;
    printf("The value of ptr after ptr is decreased is %u\n", ptr);
    printf("The difference between ptr and &i after ptr is decreased is %d\n", ptr - &i);
    if(ptr>&i){
        printf("ptr is greater");
    }
    else if(ptr<&i){
        printf("ptr is not greater");
    }
    else{
        printf("ptr is equal");
    }
    return 0;
}