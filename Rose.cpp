#include <iostream>
#include <string>
#include <cctype> // for tolower
using namespace std;

void guessRose() {
    cout << "Main menu: " << endl;
    cout << "1. Start Game" << endl;
    cout << "2. End game" << endl;
}

void inGame() {
    cout << "\nDo you know Rose?" << endl;
    cout << "Roses's favourite color?" << endl;
    cout << "a. Red | b. Pink | c. Purple" << endl;
}

void birthDate() {
    cout << "When was Rose born?" << endl;
    cout << "a. 2005/17/06 | b. 2005/16/04 | c. 2005/16/09" << endl;
}

void correctAnswer() {
    cout << "Correct, you move on to the next round\n" << endl;
}

void wrongAnswer() {
    cout << "Wrong answer!" << endl;
}

void finalQuestion() {
    cout << "Where does Rose want to spend her 20th birthday?" << endl;
    cout << "a. Singapore | b. Paris | c. Dubai" << endl;
}

int main() {
    int choice = 0;
    int number_of_chances = 0; // number of tries per question

    guessRose();
    cin >> choice;

    switch (choice) {
        case 1: {
            char first_question, second_question, third_question;
            while (true) {
                // Reset number_of_chances for the first question
                number_of_chances = 0;
                inGame();
                cin >> first_question;
                first_question = tolower(first_question);
                if (first_question == 'c') {
                    correctAnswer();

                    // Reset number_of_chances for the second question
                    number_of_chances = 0;
                    birthDate();
                    cin >> second_question;
                    second_question = tolower(second_question);
                    if (second_question == 'c') {
                        correctAnswer();

                        // Reset number_of_chances for the final question
                        number_of_chances = 0;
                        finalQuestion();
                        cin >> third_question;
                        third_question = tolower(third_question);
                        if (third_question == 'b') {
                            correctAnswer();
                            cout << "You've gotten everything right! Bye!" << endl;
                            break;
                        } else {
                            wrongAnswer();
                            number_of_chances++;
                            if (number_of_chances == 3) {
                                cout << "You've used up all your chances, Goodbye!" << endl;
                                break;
                            }
                        }
                    } else {
                        wrongAnswer();
                        number_of_chances++;
                        if (number_of_chances == 3) {
                            cout << "You've used up all your chances! Goodbye" << endl;
                            break;
                        }
                    }
                } else {
                    wrongAnswer();
                    number_of_chances++;
                    if (number_of_chances == 3) {
                        cout << "You've used up all your chances! Goodbye!!" << endl;
                        break;
                    }
                }
            }
            break; // end of case 1
        }
        case 2: {
            cout << "Game ended" << endl;
            break;
        }
        default: {
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}
