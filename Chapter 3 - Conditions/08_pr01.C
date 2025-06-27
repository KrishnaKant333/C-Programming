#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    printf("Enter your marks in Subject 1\n");
    scanf("%d", &marks1);

    printf("Enter your marks in Subject 2\n");
    scanf("%d", &marks2);

    printf("Enter your marks in Subject 3\n");
    scanf("%d", &marks3);

    float total = (marks1 + marks2 + marks3) / 3;
    if (total >= 40)
    {
        if (marks1 < 33 || marks2 < 33 || marks3 < 33)
        {
            printf("Sorry you are not passed because your marks in one of the subjects is less than 33.");
        }
        else
        {
            printf("Congratulations! You have passed the exam.");
        }
    }
    else
    {
        printf("Sorry you failed because your total is less than 40%%.");
    }
    return 0;
}