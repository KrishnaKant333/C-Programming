#include <stdio.h>

typedef struct vector2D
{
    int x;
    int y;
} vector;

int main()
{
    vector v1;
    // vector v1 = {11, 4};
    printf("Enter the x and y coordinates:\n");
    scanf("%d%d",&v1.x,&v1.y);
    printf("The 2D vector is %di + %dj",v1.x,v1.y);
    return 0;
}