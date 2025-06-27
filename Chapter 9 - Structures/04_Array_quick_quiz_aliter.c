#include <stdio.h>

struct employee
{
    int salary;
    float hike;
    char name[10];
};

int main()
{
    struct employee facebook[3];
    printf("Enter the details for Employee1:\n");

    printf("Enter the name for Employee1:\n");
    scanf("%s",facebook[0].name);
    printf("Enter the salary for Employee1:\n");
    scanf("%d",&facebook[0].salary);
    printf("Enter the hike for Employee1:\n");
    scanf("%f",&facebook[0].hike);

    printf("Enter the details for Employee2:\n");

    printf("Enter the name for Employee2:\n");
    scanf("%s",facebook[1].name);
    printf("Enter the salary for Employee2:\n");
    scanf("%d",&facebook[1].salary);
    printf("Enter the hike for Employee2:\n");
    scanf("%f",&facebook[1].hike);

    printf("Enter the details for Employee3:\n");

    printf("Enter the name for Employee3:\n");
    scanf("%s",facebook[2].name);
    printf("Enter the salary for Employee3:\n");
    scanf("%d",&facebook[2].salary);
    printf("Enter the hike for Employee3:\n");
    scanf("%f",&facebook[2].hike);

    printf("The name of Employee1 is %s.\n", facebook[0].name);
    printf("The salary of Employee1 is %d.\n", facebook[0].salary);
    printf("The hike of Employee1 is %f.\n", facebook[0].hike);

    printf("The name of Employee2 is %s.\n", facebook[1].name);
    printf("The salary of Employee2 is %d.\n", facebook[1].salary); 
    printf("The hike of Employee2 is %f.\n", facebook[1].hike);

    printf("The name of Employee3 is %s.\n", facebook[2].name);
    printf("The salary of Employee3 is %d.\n", facebook[2].salary);
    printf("The hike of Employee3 is %f.\n", facebook[2].hike);
    return 0;
}