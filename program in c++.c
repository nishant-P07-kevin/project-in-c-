#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randomNumber, guess;

    // Generate random number between 1 and 100
    srand(time(0));
    randomNumber = rand() % 100 + 1;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "Guess a number between 1 and 100" << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber)
        {
            cout << "Too High! Try Again." << endl;
        }
        else if (guess < randomNumber)
        {
            cout << "Too Low! Try Again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        }
    }

    return 0;
}