#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//this function makes a secret number 
// and asks the user to repeatedly guess
int main() {
    int numGuess;
    int counter;

    srand(time(0));
    int secretNum = (rand() % 100) + 1;

    cout << "take a guess between 1 and 100 on what the number is: ";
    cin >> numGuess;
    counter++;
    
    while (numGuess != secretNum) {

        counter++;

        if (numGuess == secretNum) {
            break;
        }

        else if (secretNum <= 100 && secretNum > 90) {
            cout << "The number is between 90 and 100. Take another guess -> ";
            cin >> numGuess;
        }

        else if (secretNum <= 90 && secretNum > 80) {
            cout << "The number is between 80 and 100. Take another guess ->  ";
            cin >> numGuess;
        }

        else if (secretNum <= 80 && secretNum > 70) {
            cout << "The number is between 70 and 80. Take another guess ->  ";
            cin >> numGuess;
        }

        else if (secretNum <= 70 && secretNum > 60) {
            cout << "The number is between 60 and 70. Take another guess ->  ";
            cin >> numGuess;
        }

        else if (secretNum <= 60 && secretNum > 50) {
            cout << "The number is between 50 and 60. Take another guess ->  ";
            cin >> numGuess;
        }

        else if (secretNum <= 50 && secretNum > 40) {
            cout << "The number is between 40 and 50. Take another guess ->  ";
            cin >> numGuess;
        }

        else if (secretNum <= 40 && secretNum > 30) {
            cout << "The number is between 30 and 40. Take another guess ->  ";
            cin >> numGuess;
        }

        else if (secretNum <= 30 && secretNum > 20) {
            cout << "The number is between 20 and 30. Take another guess ->  ";
            cin >> numGuess;
        }

        else if (secretNum <= 20 && secretNum > 10) {
            cout << "The number is between 10 and 20. Take another guess ->  ";
            cin >> numGuess;
        }

        else if (secretNum <= 10 && secretNum > 0) {
            cout << "The number is between 1 and 10. Take another guess ->  ";
            cin >> numGuess;
        }

    }

    cout << "\nThe answer was, " << secretNum << endl;
    cout << "\nit took you " << counter << " tries to guess the right answer" << endl;

    return 0;
}
