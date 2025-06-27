#include<stdio.h>

int main(){
    // In C, a character is stored in the form of integer with a value assigned to it
    // printf("The value is %d", 'a');
    // here 'a' is a character but is stored in C as int(97). This value is known as ASCII value
    // printf("The value is %c", 'a');
    // A->Z = 65->90 & a->z = 97->122
    // The d/f b/w uppercase & lowercase values is 32 

    char character;
    printf("Enter your character\n");
    scanf("%c", &character);

    if(character>=97 && character<=122){
        printf("Yes! This is a lowercase character");
    }
    else{
        printf("No! This is not a lowercase character");
    }
    return 0;
}