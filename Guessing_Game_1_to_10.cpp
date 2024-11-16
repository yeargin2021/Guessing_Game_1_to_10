//
// Created by Tommy H Yeargin Jr on 11/16/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {


    int Answer;
    int Guess;

    // Generate a random number between 1 and 10
    srand(time(0));
    Answer = rand() % 10 + 1;

    do {
        // Ask user for a guess
        cout << "Guess a number between one and ten: ";
        cin >> Guess;

        // Compare guess and answer
        // Respond with correct if right; loop back for another guess if incorrect

        if (Answer == Guess) {
            cout << "Correct!" << endl;
        }
        else {
            cout << "Incorrect; try again!" << endl;
        }
    } while(Answer != Guess);



    return 0;
}