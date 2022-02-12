// A simple rock-paper-scissor game where the user always loses to the computer

#include <stdio.h>

void main()
{
    int hand;
    printf("Select your hand (Press 1 for Rock, 2 for Paper and 3 for Scissor): ");
    scanf("%d", &hand);

    if (hand == 1)
    {
        printf("Computer chooses Paper, You lose!\n");
    }
    else if (hand == 2)
    {
        printf("Computer chooses Scissor, You lose!\n");
    }
    else if (hand == 3)
    {
        printf("Computer chooses Rock, You lose!\n");
    }
    else
    {
        printf("That is an invalid input!\n");
    }
}