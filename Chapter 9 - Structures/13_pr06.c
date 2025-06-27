#include <stdio.h>

typedef struct complexno
{
    int re;
    int im;
}imagn;

void display(imagn a[5])
{
    printf("The complex numbers are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d + %di\n",a[i].re,a[i].im);
    }    
}

int main()
{
    imagn z[5];
    printf("Enter the real and imaginary part of a complex number :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Complex number %d:\n",i+1);
        scanf("%d%d",&z[i].re,&z[i].im);
    }
    display(z);
    return 0;
}