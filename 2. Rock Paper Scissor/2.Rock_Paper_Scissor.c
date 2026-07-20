#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userChoice, computerChoice;

    srand(time(NULL));

    printf("=====================================\n");
    printf("      ROCK PAPER SCISSORS\n");
    printf("=====================================\n");

    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("\nEnter your choice (1-3): ");
    scanf("%d", &userChoice);

    if (userChoice < 1 || userChoice > 3)
    {
        printf("\nInvalid Choice!\n");
        return 0;
    }

    computerChoice = rand() % 3 + 1;

    printf("\n");

    if (userChoice == 1)
        printf("You chose: Rock\n");
    else if (userChoice == 2)
        printf("You chose: Paper\n");
    else
        printf("You chose: Scissors");

    if (computerChoice == 1)
        printf("Computer chose: Rock\n");
    else if (computerChoice == 2)
        printf("Computer chose: Paper\n");
    else
        printf("Computer chose: Scissors\n");

    if (userChoice == computerChoice)
    {
        printf("\nIt's a Draw!\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2))
    {
        printf("\nCongratulations! You Win!\n");
    }
    else
    {
        printf("\nComputer Wins!\n");
    }

    return 0;
}