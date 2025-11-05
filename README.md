# Number-guessing-game

🎯 C Number Guessing Game

A simple, classic number guessing game implemented in the C programming language. The goal is to guess a secret random number within a set number of attempts.

✨ Features

Random Number Generation: A new secret number is chosen every time the game starts.

Difficulty Hints: The game provides feedback ("Too high" or "Too low") after each guess.

Attempt Counter: Tracks the number of guesses remaining.

Game Over Message: Clearly notifies the player whether they won or lost.

Prerequisites

To compile and run this game, you will need a C compiler installed on your system.

C Compiler: Most commonly, GCC (GNU Compiler Collection) is used.

Check if GCC is installed by running: gcc --version

How to Compile and Run

Follow these steps to get the game running on your local machine.

1. Save the Source Code

Assuming your C source file is named guess_game.c, save it in a location on your computer.

2. Compile the Program

Open your terminal or command prompt, navigate to the directory where you saved the file, and use the GCC compiler to create an executable:

gcc guess_game.c -o number_guesser


This command compiles guess_game.c and creates an executable file named number_guesser (or number_guesser.exe on Windows).

3. Run the Game

Execute the compiled program from your terminal:

./number_guesser


(On Windows, you might just run number_guesser.exe)

🕹️ How to Play

The computer will choose a secret number between 1 and 100.

You will be prompted to enter your guess.

The game will tell you if your guess is "Too high" or "Too low".

Keep guessing until you correctly identify the number or run out of attempts!
