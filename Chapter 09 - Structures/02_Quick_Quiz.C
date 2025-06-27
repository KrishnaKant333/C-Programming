#include <stdio.h>

struct employee
{
    int salary;
    float hike;
    char name[10];
};

int main()
{
    struct employee Employee1, Employee2, Employee3;
    printf("Enter the details for Harry:\n");

    printf("Enter the name for Employee1:\n");
    scanf("%s",Employee1.name);
    printf("Enter the salary for Employee1:\n");
    scanf("%d",&Employee1.salary);
    printf("Enter the hike for Employee1:\n");
    scanf("%f",&Employee1.hike);

    printf("Enter the details for Employee2:\n");

    printf("Enter the name for Employee2:\n");
    scanf("%s",Employee2.name);
    printf("Enter the salary for Employee2:\n");
    scanf("%d",&Employee2.salary);
    printf("Enter the hike for Employee2:\n");
    scanf("%f",&Employee2.hike);

    printf("Enter the details for Employee3:\n");

    printf("Enter the name for Employee3:\n");
    scanf("%s",Employee3.name);
    printf("Enter the salary for Employee3:\n");
    scanf("%d",&Employee3.salary);
    printf("Enter the hike for Employee3:\n");
    scanf("%f",&Employee3.hike);

    printf("The name of Employee1 is %s.\n", Employee1.name);
    printf("The salary of Employee1 is %d.\n", Employee1.salary);
    printf("The hike of Employee1 is %f.\n", Employee1.hike);

    printf("The name of Employee2 is %s.\n", Employee2.name);
    printf("The salary of Employee2 is %d.\n", Employee2.salary); 
    printf("The hike of Employee2 is %f.\n", Employee2.hike);

    printf("The name of Employee3 is %s.\n", Employee3.name);
    printf("The salary of Employee3 is %d.\n", Employee3.salary);
    printf("The hike of Employee3 is %f.\n", Employee3.hike);
    return 0;
}