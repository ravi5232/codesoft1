#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    std::srand(std::time(0));
    int randomNumber = std::rand() % 100 + 1;
    int guess;
    bool guessTooHigh = false;
    bool guessTooLow = false;

    std::cout << "Guess a number between 1 and 100: ";
    std::cin >> guess;

    while (guess != randomNumber)
    {
        if (guess > randomNumber)
        {
            guessTooHigh = true;
            guessTooLow = false;
            std::cout << "Your guess is too high. Try again: ";
            std::cin >> guess;
        }
        else if (guess < randomNumber)
        {
            guessTooHigh = false;
            guessTooLow = true;
            std::cout << "Your guess is too low. Try again: ";
            std::cin >> guess;
        }
    }

    if (guessTooHigh)
    {
        std::cout << "Your last guess was too high, but you got it! The number was " << randomNumber << "." << std::endl;
    }
    else if (guessTooLow)
    {
        std::cout << "Your last guess was too low, but you got it! The number was " << randomNumber << "." << std::endl;
    }
    else
    {
        std::cout << "Congratulations! You guessed the number on your first try." << std::endl;
    }

    return 0;
}