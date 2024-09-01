// Program for Number Guessing Game using C++ programming language. 

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    char playAgain;
    do 
    {
        // Seed the random number generator
        std::srand(static_cast<unsigned int>(std::time(0)));

        // Generate a random number between 1 and 100
        int targetNumber = std::rand() % 100 + 1;
        int guess;
        int attempts = 0;

        std::cout << "Welcome to the Number Guessing Game!" << std::endl;
        std::cout << "I'm thinking of a number between 1 and 100." << std::endl;

        do 
        {
            std::cout << "Enter your guess: ";
            std::cin >> guess;
            attempts++;

            if (guess > targetNumber) 
            {
                std::cout << "Too high! Try again." << std::endl;
            } else if (guess < targetNumber) 
            {
                std::cout << "Too low! Try again." << std::endl;
            } 
              else 
            {
                std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            }
        } while (guess != targetNumber);

        // Ask the user if they want to play again
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thank you for playing! Goodbye!" << std::endl;

    return 0;
}