#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // generate a seed
    srand(time(NULL));

    // vars
    int difficulty = 0;
    int secret_number = 1;
    int guess = 0;
    int attempts = 0;

    printf("SECRET NUMBER GAME\n");

    printf("1 - easy\n");
    printf("2 - normal\n");
    printf("3 - hard\n");
    printf("Select the difficulty: ");

    // invalid difficulty
    while (difficulty < 1 || difficulty > 3)
    {
        scanf("%d", &difficulty);
    }

    // generate a random number according to the difficulty
    switch (difficulty)
    {
    case 1:
        secret_number = (rand() % 10) + 1;
        printf("Easy difficulty (number between 1 and 10)\n");

        break;
    case 2:
        secret_number = (rand() % 100) + 1;
        printf("Normal difficulty (number between 1 and 100)\n");
        break;
    case 3:
        secret_number = (rand() % 1000) + 1;
        printf("Hard difficulty (number between 1 and 1000)\n");
        break;
    default:
        break;
    }
    
    printf("Your guess: ");

    do
    {
        scanf("%d", &guess);
        // adding attempt
        attempts++;

        if (secret_number == guess)
        {
            printf("Congratulations! The secret number is %d\n", secret_number);
            printf("Total of attemps: %d\n", attempts);
        }
        else
        {
            printf("Wrong guess\n");

            // guess less or greater than secret number
            if (guess > secret_number)
            {
                printf("%d is greater than secret number\n", guess);
            }
            else
            {
                printf("%d is less than secret number\n", guess);
            }
        }
    } while (guess != secret_number);

    printf("Thanks for playing\n");

    return 0;
}