#include <stdio.h>

int main(){
    
    int a;
    printf("How many marks in Maths\n");
    scanf("%d", &a);

    if(a<=10 || a==69 || a==96){
        printf("Are you dumb\n");
    }
    else if(a>10 && a<20 || a!=89){
        printf("Are u being serious\n");
    }
    else{
        printf("Yup u got this\n");
    } 
    return 0;
}
// Me goin BYEEE