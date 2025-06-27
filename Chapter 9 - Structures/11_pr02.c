#include <stdio.h>

typedef struct vector2d
{
    int x;
    int y;
} vector;

// void sum(int x1,int y1,int x2,int y2)
// {
//     int r1,r2;
//     r1=x1+x2;
//     r2=y1+y2;
//     printf("The sum = %di+%dj",r1,r2);
// }

vector sum(vector first, vector second)
{
    int a,b;
    a = first.x + second.x;
    b = first.y + second.y;
    vector result = {a,b};
    return result;
}

int main()
{
    vector v1,v2,v3;
    printf("Enter the x and y coordinates of first vector:\n",v1.x,v1.y);
    scanf("%d%d",&v1.x,&v1.y);
    printf("Enter the x and y coordinates of second vector:\n",v2.x,v2.y);    
    scanf("%d%d",&v2.x,&v2.y);
    // printf("The two vectors given are:\n%di+%dj\n%di+%dj\n",v1.x,v1.y,v2.x,v2.y);
    // sum(v1.x,v1.y,v2.x,v2.y);
    printf("First vector = %di+%dj",v1.x,v1.y);
    printf("\nSecond vector = %di+%dj",v2.x,v2.y);
    v3 = sum(v1,v2);
    printf("\nThe sum = %di+%dj",v3.x,v3.y);
    return 0;
}
