#include <stdio.h>

struct employee
{
    int salary;
    float hike;
    char name[10];
};

void show(struct employee e)
{
    e.name[0]='P';
    printf("The name of employee is %s\n",e.name);
    printf("The salary of employee is %d\n",e.salary);
    printf("The hike of employee is %f\n",e.hike);
    e.hike = 4.55;
}

void showRef(struct employee *e)
{
    (*e).name[0]='P';
    printf("\nThe name of employee is %s\n",e->name);
    printf("The salary of employee is %d\n",e->salary);
    printf("The hike of employee is %f\n",e->hike);
    (*e).hike = 4.55;
}

int main()
{
    struct employee harry = {32,5.2,"Harry"};
    show(harry);

    showRef(&harry); // value changed at original first

    printf("\nThe name of employee is %s\n",harry.name);
    printf("The salary of employee is %d\n",harry.salary);
    printf("The hike of employee is %f\n",harry.hike);

    // showRef(&harry); // value changed at original last 
    return 0;
}

// this means that the values are being copied so if changes take place in a
// function it will not be reflected in the original case
// but will change when we pass the address tho