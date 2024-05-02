#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0));
    int num = rand() % 100 + 1; // Random number between 1 and 100
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the guessing game! Guess a number between 1 and 100: ";

    do {
        std::cin >> guess;
        attempts++;

        if(guess > num) {
            std::cout << "Too high! Try again: ";
        } else if(guess < num) {
            std::cout << "Too low! Try again: ";
        }
    } while(guess != num);

    std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts.\n";

    return 0;
}
