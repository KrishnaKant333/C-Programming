#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nGuesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        printf("Guess the number between 1 to 100:\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Woah! You got it correct.\nYou took %d attempt(s).", nGuesses);
        }
        nGuesses++;
    } while (guess != number);

    return 0;
}
// :)