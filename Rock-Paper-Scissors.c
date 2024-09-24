#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(int userChoice) {
    char *choices[] = {"Rock", "Paper", "Scissors"};
    srand(time(0));
    int computerChoice = (rand() % 3) + 1;

    printf("You chose: %s\n", choices[userChoice - 1]);
    printf("Computer chose: %s\n", choices[computerChoice - 1]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int userChoice;
    
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
    scanf("%d", &userChoice);
    
    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please enter 1, 2, or 3.\n");
    } else {
        playGame(userChoice);
    }
    
    return 0;
}

