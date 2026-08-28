#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess;
    int attempts = 0;

    // Generate a random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "==============================" << endl;
    cout << "      NUMBER GUESSING GAME    " << endl;
    cout << "==============================" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do
    {
        cout << "\nEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < number)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "\nCongratulations! You guessed the number!" << endl;
            cout << "Number of attempts: " << attempts << endl;
        }

    } while (guess != number);

    return 0;
}
