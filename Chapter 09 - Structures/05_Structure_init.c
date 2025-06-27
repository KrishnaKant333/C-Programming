#include <stdio.h>

struct employee
{   
    int salary;
    float hike;
    char name[10];
};

int main()
{
    struct employee harry = {34, 5.2, "Harry"};
    printf("The name of employee is %s\n",harry.name);
    printf("The salary of employee is %d\n",harry.salary);
    printf("The hike of employee is %f\n",harry.hike);
    return 0;
} 