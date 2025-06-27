//Write a structure capable of storing date. 
// Write a function to compare the dates.
#include <stdio.h>

typedef struct storeDate
{
    int d;
    int m;
    int y;
} date;

void dtcmp(date f, date s)
{
    static int k, yearly, mearly, dearly;
    if (f.y > s.y)
    { 
        yearly = f.y;
        mearly = f.m;
        dearly = f.d;
    }
    else if (f.y < s.y)
    {
        yearly = s.y;
        mearly = s.m;
        dearly = s.d;
    }
    else
    {
        if (f.m > s.m)
        {   
            mearly = f.m;
            yearly = f.y;
            dearly = f.d;
        }
        else if (f.m < s.m)
        {
            mearly = s.m;
            yearly = s.y;
            dearly = s.d;
        }
        else
        {
            if (f.d > s.d)
            {
                dearly = f.d;
                mearly = f.m;
                yearly = f.y;
            }
            else if (f.d < s.d)
            {
                dearly = s.d;
                mearly = s.m;
                yearly = s.y;
            }
            else
            {
                printf("Its the same date!");
                k=1;
            }                       
        }             
    }
    if (k==0)
    {
        printf("The earliest date is %d-%d-%d",dearly, mearly, yearly);    
    }    
}
int main()
{   
    date dt1, dt2;
    printf("Enter the first date in dd-mm-yyyy format:\n");
    scanf("%d%d%d",&dt1.d,&dt1.m,&dt1.y);

    printf("Enter the second date in dd-mm-yyyy format:\n");
    scanf("%d%d%d",&dt2.d,&dt2.m,&dt2.y);

    if(dt1.d<=31, dt2.d<=31, dt1.m<=12, dt2.m<=12)
    {
        dtcmp(dt1, dt2);
    }
    else
    {
        printf("The date entered is not practical");
    }
    return 0;
}