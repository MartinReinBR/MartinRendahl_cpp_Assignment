//Guessing Game Assignment

#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

void GuessingGame()
{
    while (true)
    {
        srand(time(0));
        int secretNumber = rand() % 10 + 1;
        int guessNumber;
        int tries = 0;

        cout << "\nGuess the number (1 to 10) " << endl;

        do {
            cout << "Enter your guess: ";
            while (!(cin >> guessNumber))
            {
                cout << "Must be a number: " << endl;
                cin.clear();
                cin.ignore(100, '\n');
            }

            if (guessNumber != secretNumber)
            {
                cout << "Thats the wrong number!" << endl;
            }

            tries++;

        } while (secretNumber != guessNumber);

        cout << endl << secretNumber << " is correct, Amount of tries " << tries << endl;

        cout << "Do you wanna play again (Y/N): ";
        char answer;
        cin >> answer;
        if (answer != 'Y')
        {
            break;
        }
    }
}

int main()
{
    GuessingGame();

    return 0;
}
