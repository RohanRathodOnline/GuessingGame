#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <limits>

using namespace std;

int main() {

    srand(time(0));   // Seed random generator ONCE

    char playAgain;

    cout << "=====================================\n";
    cout << "=       NUMBER GUESSING GAME        =\n";
    cout << "=====================================\n";

    do {

        int randomNumber = rand() % 100 + 1;   // Random number 1-100
        int guess = 0;
        int attempts = 0;

        cout << "\nI have generated a number between 1 and 100.\n";
        cout << "Try to guess it!\n";


        while (guess != randomNumber) {

            cout << "Enter your guess: ";

            if (!(cin >> guess)) {
                cout << "Please enter a valid number." << endl;
                cin.clear(); // clear error state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input
                continue; // ask again without counting attempt
            }

            attempts++;

            // keep guesses inside the expected range
            if (guess < 1 || guess > 100) {
                cout << "Please enter a number between 1 and 100." << endl;
                continue;
            }

            int difference = abs(guess - randomNumber);

            if (difference == 0) {
                cout << "?? Correct! You guessed it in "
                     << attempts << " attempts.\n";
            }
            else if (difference <= 5) {
                if (guess > randomNumber)
                    cout << "?? Very close! A little lower.\n";
                else
                    cout << "?? Very close! A little higher.\n";
            }
            else if (difference <= 10) {
                if (guess > randomNumber)
                    cout << "?? Close! Try a smaller number.\n";
                else
                    cout << "?? Close! Try a bigger number.\n";
            }
            else {
                if (guess > randomNumber)
                    cout << "Too high! Try again.\n";
                else
                    cout << "Too low! Try again.\n";
            }
        }

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThank you for playing!\n";

    return 0;
}
