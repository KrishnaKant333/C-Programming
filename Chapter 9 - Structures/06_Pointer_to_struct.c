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
    struct employee *ptr = &harry;
    // printf("The name of employee is %s\n",harry.name);
    // printf("The salary of employee is %d\n",harry.salary);
    // printf("The hike of employee is %f\n",harry.hike);

    printf("The name of employee is %s\n",(*ptr).name);
    printf("The salary of employee is %d\n",(*ptr).salary);
    printf("The hike of employee is %f\n",(*ptr).hike);


    return 0;
} 