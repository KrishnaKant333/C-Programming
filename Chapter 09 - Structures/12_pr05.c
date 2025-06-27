#include <stdio.h>

typedef struct complexno
{
    int re;
    int im;
}z;

int main()
{
    int x,y;
    printf("Enter the real and imaginary part of a complex number :\n");
    scanf("%d%d",&x,&y);
    z complex = {x,y};
    printf("The complex number entered is %d+%di",complex.re,complex.im);
    return 0;
}
