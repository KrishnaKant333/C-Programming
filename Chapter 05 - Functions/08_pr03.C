#include <stdio.h>

double force(float, float, float);
int main()
{
    float f, m;
    float g = 9.8;
    printf("Enter the mass of the body:\n");
    scanf("%f", &m);
    printf("The force of attraction on a body of mass %f is %lf.\n", m, force(f, m, g));
    return 0;
}

double force(float f, float m, float g){
    f = m*g;
    return f;

}
// 5:02:39