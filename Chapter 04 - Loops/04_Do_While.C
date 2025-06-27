#include<stdio.h>

int main(){
    int i = 1;
    // while(i<5){
    //     printf("The value of i is %d\n", i);
    // } // = while first checks then executes

    do{
        printf("The value of i is %d\n", i);
        i++;
    }while(i<5); // = do while first executes the checks the condition
    //do - while loop = while loop which executes at least once
    return 0;
}
// 3:24:37 