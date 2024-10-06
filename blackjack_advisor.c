/* 
Lourenco DaSilva
October 6th 2024
(Personal Project)

This program is designed to tell you what move to make in blackjack based on a basic Blackjack strategy
The algoritm is based on https://www.blackjackapprenticeship.com/blackjack-strategy-charts/  */

#include <stdio.h>

// When to Stand, Double, or Hit
void blackjack_decision(int player_hand, int dealer_card) {
    // Logic for hard hands
    if (player_hand >= 17) {
        printf("Stand\n");
    } else if (player_hand >= 13 && dealer_card <= 6) {
        printf("Stand\n");
    } else if (player_hand == 12 && dealer_card >= 4 && dealer_card <= 6) {
        printf("Stand\n");
    } else if (player_hand == 11) {
        printf("Double\n");
    } else if (player_hand == 10 && dealer_card <= 9) {
        printf("Double\n");
    } else if (player_hand == 9 && dealer_card >= 3 && dealer_card <= 6) {
        printf("Double\n");
    } else {
        printf("Hit\n"); // If no conditions match, suggest hitting
    }
}

// When to Split
void split_decision(int player_card, int dealer_card) {
    // Pair 8s or Aces
    if (player_card == 8 || player_card == 11) {
        printf("Split\n");
    } 
    // Pair 9s
    else if (player_card == 9 && dealer_card != 7 && dealer_card != 10 && dealer_card != 11) {
        printf("Split\n");
    } else {
        printf("Do not split\n");
    }
}

int main() {
    int dealer_card, player_hand, is_pair, player_card;
    char play_again;

    // Game loop
    do {
        // Inputting Dealers Shown Card 
        printf("Enter dealer's card (2-11, where 11 is Ace): ");
        scanf("%d", &dealer_card);

        // Checking for Pair (Same Card ex. 7,7)
        printf("Do you have a pair? (1 for yes, 0 for no): ");
        scanf("%d", &is_pair);

        if (is_pair) {
            // If they have a pair, ask for value of it
            printf("Enter the value of the pair (2-11, where 11 is Ace): ");
            scanf("%d", &player_card);
            split_decision(player_card, dealer_card);
        } else {
            // If no pair, ask for the hand total
            printf("Enter your hand value (2-21): ");
            scanf("%d", &player_hand);
            blackjack_decision(player_hand, dealer_card);
        }

        // Ask if the user wants to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &play_again);

    } while (play_again == 'y' || play_again == 'Y'); // Loop condition to continue if 'y' or 'Y' is entered

    printf("Thanks for playing!\n");

    return 0;
}


