# Blackjack Strategy Advisor

**Author**: Lourenco DaSilva  
**Date**: October 6th, 2024  
**Project Type**: Personal Project

## Disclaimer:

This is not 100% correct and should not be used for gambling involving with currency as Blackjack is a game that includes chance. Gamble Responsibly. Drink Responsibly. And be extremely responsible if you're doing both at the same time. Enjoy!

## Overview

The **Blackjack Strategy Advisor** is a C program designed to help players make optimal decisions in the game of Blackjack. The program uses a simplified version of the basic Blackjack strategy to suggest whether the player should **Hit**, **Stand**, **Double**, or **Split** based on their hand and the dealer's visible card.

This project is based on well-established Blackjack strategy charts, such as the one provided by [Blackjack Apprenticeship](https://www.blackjackapprenticeship.com/blackjack-strategy-charts/).

## Features

- **Player's Move Suggestions**: The program will suggest whether to Hit, Stand, Double, or Split based on the player's current hand and the dealer's upcard.
- **Pair Splitting**: It will advise the player whether to split pairs, following common Blackjack strategy rules.
- **Support for Hard Hands**: The program correctly handles the player's hard hands and makes appropriate suggestions.

## How It Works

The program takes input from the player, including:
- The dealer’s visible card (between 2 and 11, where 11 represents an Ace).
- Whether the player has a pair of cards.
- If the player doesn’t have a pair, it asks for the total value of the player’s hand.

Based on these inputs, the program follows Blackjack strategy rules and outputs the recommended move:
- **Stand**: The player should not take another card.
- **Hit**: The player should take another card.
- **Double**: The player should double their bet and take one more card.
- **Split**: The player should split their pair into two separate hands.

## Usage

### Compiling the Program

To compile the program using `gcc`:

```bash
gcc blackjack_advisor.c -o blackjack_advisor
```

### Running the Program

Once compiled, you can run the program in a terminal:

```bash
./blackjack_advisor
```

### Input

The program will prompt you for:
1. The dealer’s visible card (2-11, with 11 representing Ace).
2. Whether you have a pair (input 1 for "Yes" or 0 for "No").
3. If no pair, the program will ask for the total value of your hand (between 2 and 21).

### Output

The program will print one of the following recommendations based on your input:
- **"Hit"**
- **"Stand"**
- **"Double"**
- **"Split"**
- **"Do not split"** (for non-optimal pair splits)

### Example

```bash
Enter dealer's card (2-11, where 11 is Ace): 8
Do you have a pair? (1 for yes, 0 for no): 0
Enter your hand value (2-21): 16
Hit
```

## Blackjack Strategy

This program implements a simplified version of the Blackjack basic strategy:
- **Hard Hands**: When the player has no Ace, or the Ace counts as 1.
- **Pair Splitting**: Based on common Blackjack rules for pairs like 8-8, 9-9, and Aces.

### Key Rules:
- **Stand** on 17 or higher.
- **Double** on 9-11 when the dealer’s card is weak (3-6 for 9, up to 9 for 10).
- **Split** 8s and Aces, but do not split 9s against strong dealer cards (7, 10, or Ace).
- **Hit** on weak hands or when the dealer shows a strong card.

## Future Enhancements

Planned improvements include:
- Adding support for **soft hands** (hands with an Ace valued as 11).
- More detailed strategy adjustments for edge cases, such as **surrender** and **insurance**.

## License

This project is for personal and educational use. Feel free to modify the code for your own projects.

